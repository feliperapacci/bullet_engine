# Note: includes contain "SYSTEM" to suppress warnings

# GLAD
add_library(glad STATIC glad/src/glad.c)
target_include_directories(glad SYSTEM PUBLIC glad/include)

# stb
add_library(stb STATIC stb/stb_implementation.cpp)
target_include_directories(stb SYSTEM PUBLIC stb)

# glm
add_library(glm INTERFACE)
target_include_directories(glm SYSTEM INTERFACE glm)

# GLFW
include(FetchContent)                                   # Loads FetchContent CMake Lib
set(GLFW_BUILD_DOCS     OFF CACHE BOOL "" FORCE)        # GLFW options in its CMakeLists.txt
set(GLFW_BUILD_TESTS    OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL        OFF CACHE BOOL "" FORCE)
FetchContent_Declare(glfw                               # Specifies where to find the library
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG        3.5
    GIT_SHALLOW    TRUE
    SYSTEM
)
FetchContent_MakeAvailable(glfw)                        # Downloads GLFW into /build/... if needed!
