add_executable(motion_planning_api_node src/motion_planning_api_node.cpp)
target_link_libraries(motion_planning_api_node ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS motion_planning_api_node DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
