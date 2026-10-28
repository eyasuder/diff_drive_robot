cmake_minimum_required(VERSION 3.8)
project(sensor_covariance_nodes)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

include_directories(include)

add_executable(odom_covariance_node
  src/odom_covariance_node.cpp
)
ament_target_dependencies(odom_covariance_node
  rclcpp
  nav_msgs
)
target_compile_features(odom_covariance_node PUBLIC cxx_std_17)

add_executable(imu_covariance_node
  src/imu_covariance_node.cpp
)
ament_target_dependencies(imu_covariance_node
  rclcpp
  sensor_msgs
)
target_compile_features(imu_covariance_node PUBLIC cxx_std_17)

install(TARGETS
  odom_covariance_node
  imu_covariance_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include
)

install(DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

ament_package()
