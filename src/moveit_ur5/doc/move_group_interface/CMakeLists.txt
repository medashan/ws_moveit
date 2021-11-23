add_executable(move_group_interface_node src/move_group_interface_node.cpp)
target_link_libraries(move_group_interface_node ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS move_group_interface_node DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
