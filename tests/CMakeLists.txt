# Install GTest
# Link "FetchContent", set options, specifcy location, and install
include(FetchContent)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
set(gtest_force_shared_Crt ON CACHE BOOL "" FORCE) # Froce windows or msvc
FetchContent_Declare(googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.18.0
    GIT_SHALLOW    TRUE
    SYSTEM
)
FetchContent_MakeAvaiable(googletest)

# add_executable(bang_tests
# Add .cpp files here
# )

# target_link_libraries(bang_tests PRIVATE
#     GTest::gtest_main
#     Add .hpp files here
# )

bang_set_warnings(bang_tests)

include(GoogleTest)
gtest_discover_tests(bang_tests)
