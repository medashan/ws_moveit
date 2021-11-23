add_executable(pick_place_node src/pick_place_node.cpp)
target_link_libraries(pick_place_node ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS pick_place_node DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
