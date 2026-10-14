# Install GTest
# Link "FetchContent", set options, specifcy location, and install
include(FetchContent)
set(INSTALL_GTEST   OFF CACHE BOOL "" FORCE)
set(BUILD_GMOCK     OFF CACHE BOOL "" FORCE)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE) # Froce windows or msvc
FetchContent_Declare(googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.18.0
    GIT_SHALLOW    TRUE
    SYSTEM
)
FetchContent_MakeAvailable(googletest)

add_executable(bang_tests
    test_core.cpp
)

target_link_libraries(bang_tests PRIVATE
    GTest::gtest_main

    bang_core
)

bang_set_warnings(bang_tests)

include(GoogleTest)
gtest_discover_tests(bang_tests)
