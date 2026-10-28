#ifndef SENSOR_COVARIANCE_NODES__IMU_COVARIANCE_NODE_HPP_
#define SENSOR_COVARIANCE_NODES__IMU_COVARIANCE_NODE_HPP_

#include <array>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"

namespace sensor_covariance_nodes
{

class ImuCovarianceNode : public rclcpp::Node
{
public:
  ImuCovarianceNode();

private:
  void imu_callback(const sensor_msgs::msg::Imu::SharedPtr msg);
  void set_covariance_diagonal(
    std::array<double, 9> & covariance,
    const std::array<double, 3> & diagonal);

  std::string input_topic_;
  std::string output_topic_;
  std::array<double, 3> orientation_covariance_diagonal_;
  std::array<double, 3> angular_velocity_covariance_diagonal_;
  std::array<double, 3> linear_acceleration_covariance_diagonal_;

  rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr subscription_;
  rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr publisher_;
};

}  // namespace sensor_covariance_nodes

#endif  // SENSOR_COVARIANCE_NODES__IMU_COVARIANCE_NODE_HPP_
