# = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# CMAKE
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

if (NOT DEFINED SOLUTION_CMAKE_VERSION)
  set(SOLUTION_CMAKE_VERSION 3.22)
endif (NOT DEFINED SOLUTION_CMAKE_VERSION)

set(SOLUTION_CMAKE_VERSION 3.22)
cmake_minimum_required(VERSION ${SOLUTION_CMAKE_VERSION})

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# PROJECT
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

set(HEX_ENGINE_VERSION 0.1.0)
project("hexEngine" VERSION ${HEX_ENGINE_VERSION})

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# MODULES
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# hexEngine.Core

# hexEngine.{PLATFORM}

# = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
