add_executable(visualizing_collisions_node
  src/visualizing_collisions_node.cpp
)

target_link_libraries(visualizing_collisions_node
  ${interactive_markers_LIBRARIES}
  interactivity_utils
  ${catkin_LIBRARIES}
  ${Boost_LIBRARIES}
)

install(
  TARGETS
  visualizing_collisions_node
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
