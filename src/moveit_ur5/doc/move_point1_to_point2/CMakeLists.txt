add_executable(move_point1_to_point2_node src/move_point1_to_point2_node.cpp)
target_link_libraries(move_point1_to_point2_node ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS move_point1_to_point2_node DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
