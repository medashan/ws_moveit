
#ifndef MOVEIT_PLANNING_SCENE_EXPORT_H
#define MOVEIT_PLANNING_SCENE_EXPORT_H

#ifdef MOVEIT_PLANNING_SCENE_STATIC_DEFINE
#  define MOVEIT_PLANNING_SCENE_EXPORT
#  define MOVEIT_PLANNING_SCENE_NO_EXPORT
#else
#  ifndef MOVEIT_PLANNING_SCENE_EXPORT
#    ifdef moveit_planning_scene_EXPORTS
        /* We are building this library */
#      define MOVEIT_PLANNING_SCENE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MOVEIT_PLANNING_SCENE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MOVEIT_PLANNING_SCENE_NO_EXPORT
#    define MOVEIT_PLANNING_SCENE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MOVEIT_PLANNING_SCENE_DEPRECATED
#  define MOVEIT_PLANNING_SCENE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MOVEIT_PLANNING_SCENE_DEPRECATED_EXPORT
#  define MOVEIT_PLANNING_SCENE_DEPRECATED_EXPORT MOVEIT_PLANNING_SCENE_EXPORT MOVEIT_PLANNING_SCENE_DEPRECATED
#endif

#ifndef MOVEIT_PLANNING_SCENE_DEPRECATED_NO_EXPORT
#  define MOVEIT_PLANNING_SCENE_DEPRECATED_NO_EXPORT MOVEIT_PLANNING_SCENE_NO_EXPORT MOVEIT_PLANNING_SCENE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MOVEIT_PLANNING_SCENE_NO_DEPRECATED
#    define MOVEIT_PLANNING_SCENE_NO_DEPRECATED
#  endif
#endif

#endif
