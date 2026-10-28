#include "sensor_covariance_nodes/odom_covariance_node.hpp"

#include <array>
#include <functional>
#include <utility>

namespace sensor_covariance_nodes
{

OdomCovarianceNode::OdomCovarianceNode()
: Node("odom_covariance_node")
{
  input_topic_ = declare_parameter<std::string>("input_topic", "/diff_cont/odom");
  output_topic_ = declare_parameter<std::string>("output_topic", "/odom_with_covariance");

  // Covariance diagonal order: x, y, z, roll, pitch, yaw.
  // These are example variances, not universal/calibrated sensor values.
  pose_covariance_diagonal_ = {
    declare_parameter<double>("pose_var_x", 0.05),
    declare_parameter<double>("pose_var_y", 0.05),
    declare_parameter<double>("pose_var_z", 1000000.0),
    declare_parameter<double>("pose_var_roll", 1000000.0),
    declare_parameter<double>("pose_var_pitch", 1000000.0),
    declare_parameter<double>("pose_var_yaw", 0.05)
  };

  // Covariance diagonal order: vx, vy, vz, vroll, vpitch, vyaw.
  twist_covariance_diagonal_ = {
    declare_parameter<double>("twist_var_vx", 0.02),
    declare_parameter<double>("twist_var_vy", 1000000.0),
    declare_parameter<double>("twist_var_vz", 1000000.0),
    declare_parameter<double>("twist_var_vroll", 1000000.0),
    declare_parameter<double>("twist_var_vpitch", 1000000.0),
    declare_parameter<double>("twist_var_vyaw", 0.02)
  };

  publisher_ = create_publisher<nav_msgs::msg::Odometry>(output_topic_, 10);
  subscription_ = create_subscription<nav_msgs::msg::Odometry>(
    input_topic_, rclcpp::SensorDataQoS(),
    std::bind(&OdomCovarianceNode::odom_callback, this, std::placeholders::_1));

  RCLCPP_INFO(
    get_logger(), "Subscribing to '%s'; publishing covariance-adjusted odometry on '%s'",
    input_topic_.c_str(), output_topic_.c_str());
}

void OdomCovarianceNode::set_covariance_diagonal(
  std::array<double, 36> & covariance,
  const std::array<double, 6> & diagonal)
{
  covariance.fill(0.0);
  for (std::size_t i = 0; i < diagonal.size(); ++i) {
    covariance[i * 6 + i] = diagonal[i];
  }
}

void OdomCovarianceNode::odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
{
  auto output = *msg;
  set_covariance_diagonal(output.pose.covariance, pose_covariance_diagonal_);
  set_covariance_diagonal(output.twist.covariance, twist_covariance_diagonal_);
  publisher_->publish(output);
}

}  // namespace sensor_covariance_nodes

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<sensor_covariance_nodes::OdomCovarianceNode>());
  rclcpp::shutdown();
  return 0;
}
