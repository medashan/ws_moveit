add_executable(planning_scene_ur5 src/planning_scene_ur5.cpp)
target_link_libraries(planning_scene_ur5 ${catkin_LIBRARIES} ${Boost_LIBRARIES})
install(TARGETS planning_scene_ur5 DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
