# Note: includes contain "SYSTEM" to suppress warnings
# GLAD
add_library(glad STATIC glad/src/glad.c)
target_include_directories(glad SYSTEM PUBLIC glad/include)

# stb
add_library(stb STATIC stb/stb_implementation.cpp)
target_include_directories(stb SYSTEM PUBLIC stb)


# GLFW 
include(FetchContent)                                   # Loads FetchContent CMake Lib
set(GLFW_BUILD_DOCS     OFF CACHE BOOL "" FORCE)        # GLFW options in its CMakeLists.txt
set(GLFW_BUILD_TESTS    OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL        OFF CACHE BOOL "" FORCE)
FetchContent_Declare(glfw                               # Specifies where to find the library
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG        3.5.1
    GIT_SHALLOW    TRUE
    SYSTEM
)
FetchContent_MakeAvailable(glfw)                        # Downloads GLFW into /build/... if needed!

# glm
set(GLM_BUILD_LIBRARY OFF CACHE BOOL "" FORCE)
set(GLM_BUILD_TESTS   OFF CACHE BOOL "" FORCE)
set(GLM_BUILD_INSTALL OFF CACHE BOOL "" FORCE)
FetchContent_Declare(
	glm
	GIT_REPOSITORY	https://github.com/g-truc/glm.git
	GIT_TAG 	8d1fd52e5ab5590e2c81768ace50c72bae28f2ed #refs/tags/1.0.3
    SYSTEM
)
FetchContent_MakeAvailable(glm)
