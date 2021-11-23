add_executable(robot_model_and_robot_state_node src/robot_model_and_robot_state_node.cpp)
target_link_libraries(robot_model_and_robot_state_node ${catkin_LIBRARIES} ${Boost_LIBRARIES})

install(TARGETS robot_model_and_robot_state_node DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
