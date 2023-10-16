# = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# Google Tests
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

if (NOT HEX_ENGINE_GOOGLE_TEST_FOUND)
  set(HEX_ENGINE_GOOGLE_TEST_DIR "${CMAKE_CURRENT_LIST_DIR}/../libs/googletest")

  message(STATUS "${PROJECT_NAME} - using GoogleTest from ${HEX_ENGINE_GOOGLE_TEST_DIR}")
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  add_subdirectory(${HEX_ENGINE_GOOGLE_TEST_DIR})
else (NOT HEX_ENGINE_GOOGLE_TEST_FOUND)
  message(STATUS "${PROJECT_NAME} - GoogleTest already found by another proejct")
endif (NOT HEX_ENGINE_GOOGLE_TEST_FOUND)

# = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
