#ifndef SENSOR_COVARIANCE_NODES__ODOM_COVARIANCE_NODE_HPP_
#define SENSOR_COVARIANCE_NODES__ODOM_COVARIANCE_NODE_HPP_

#include <array>
#include <memory>
#include <string>

#include "nav_msgs/msg/odometry.hpp"
#include "rclcpp/rclcpp.hpp"

namespace sensor_covariance_nodes
{

class OdomCovarianceNode : public rclcpp::Node
{
public:
  OdomCovarianceNode();

private:
  void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg);
  void set_covariance_diagonal(
    std::array<double, 36> & covariance,
    const std::array<double, 6> & diagonal);

  std::string input_topic_;
  std::string output_topic_;
  std::array<double, 6> pose_covariance_diagonal_;
  std::array<double, 6> twist_covariance_diagonal_;

  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr subscription_;
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr publisher_;
};

}  // namespace sensor_covariance_nodes

#endif  // SENSOR_COVARIANCE_NODES__ODOM_COVARIANCE_NODE_HPP_
