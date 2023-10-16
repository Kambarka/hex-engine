# = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# CMAKE
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

cmake_minimum_required(VERSION ${HEX_ENGINE_CMAKE_VERSION})

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# SOURCES
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

set(HEX_ENGINE_TESTS_DIR "${CMAKE_CURRENT_LIST_DIR}/")
set(HEX_ENGINE_TESTS_SOURCES
  "${HEX_ENGINE_TESTS_DIR}core/game/GameTest.cpp"
)

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# BUILD
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Add Executable-Object
add_executable(hex_tests ${HEX_ENGINE_TESTS_SOURCES})

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# LINK
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# hexEngine
target_link_libraries(hex_tests
  hex
  gtest_main
)

# hexEngine.Core
target_include_directories(hex_tests PRIVATE ${HEX_ENIGNE_CORE_INCLUDE_DIR})
if (NOT EXISTS ${HEX_ENIGNE_CORE_INCLUDE_DIR})
  message(FATAL_ERROR "${PROJECT_NAME} - hexEngine.Core Include Dir not found at ${HEX_ENIGNE_CORE_INCLUDE_DIR}")
endif (NOT EXISTS ${HEX_ENIGNE_CORE_INCLUDE_DIR})

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# TESTS
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

add_test(
  NAME "hex_tests"
  COMMAND "hex_tests"
)

# = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
