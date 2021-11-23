add_executable(planning_scene_ros_api_node src/planning_scene_ros_api_node.cpp)
target_link_libraries(planning_scene_ros_api_node ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS planning_scene_ros_api_node DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
