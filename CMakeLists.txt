# = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# CMAKE
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

if (NOT DEFINED HEX_ENGINE_CMAKE_VERSION)
  set(HEX_ENGINE_CMAKE_VERSION 3.22)
endif (NOT DEFINED HEX_ENGINE_CMAKE_VERSION)

cmake_minimum_required(VERSION ${HEX_ENGINE_CMAKE_VERSION})

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# PROJECT
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

set(HEX_ENGINE_VERSION 0.1.0)
project("hexEngine" VERSION ${HEX_ENGINE_VERSION})

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# SOURCES
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

set(HEX_ENGINE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/")
set(HEX_ENGINE_SOURCES
  "${HEX_ENGINE_SOURCE_DIR}HexEngine.hpp"
  "${HEX_ENGINE_SOURCE_DIR}HexEngine.cpp"
)

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# MODULES
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# hexEngine.Core
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src/core")

# hexEngine.{PLATFORM}

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# BUILD
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Add STATIC Library-Object
add_library(hex STATIC ${HEX_ENGINE_SOURCES})

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# LINK
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# hexEnigne.Core
target_link_libraries(hex
  hex_core
)
target_include_directories(hex PRIVATE "${HEX_ENIGNE_CORE_INCLUDE_DIR}")

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# TESTS
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

if (NOT DEFINED HEX_ENGINE_TESTS_ENABLED)
  message(STATUS "${PROJECT_NAME} - tests enabled. Set <HEX_ENGINE_TESTS_ENABLED> to disable them")
  set(HEX_ENGINE_TESTS_ENABLED ON)
  enable_testing()
  include("${CMAKE_CURRENT_LIST_DIR}/cmake/tests.cmake")
  add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/tests")
endif (NOT DEFINED HEX_ENGINE_TESTS_ENABLED)

# = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
