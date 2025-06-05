cmake_minimum_required(VERSION 3.29)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})
project("Study_training" VERSION ${PROJECT_VESRION})



add_subdirectory(1st_Lessons EXCLUDE_FROM_ALL)

enable_testing()