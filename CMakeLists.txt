# CMakeLists.txt created with the help of LLMs

cmake_minimum_required(VERSION 3.25)

project(bang_engine
    VERSION 0.1.0
    LANGUAGES C CXX
)

# Prevent CMake from polluting main directory
# -------------------------------------------
if (PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
    message(FATAL_ERROR "Build in a separate directory")
endif()

# Project Settings
# ----------------
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Place executables into one /bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

# Options
# -------
option(BANG_BUILD_TESTS           "Build unit test"           ON)
option(BANG_WARNINGS_AS_ERRORS    "Treat warnings as errors"  OFF)
option(BANG_SANITIZE              "Enable ASan and UBSan"     OFF)

# Helpers
# -------

# These lines essentially link whatever is in /cmake with this CMakeLists.txt
# include(X) will link /cmake/X.cmake
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
include(Warnings)

# Sanitizers
if (BANG_SANITIZE AND NOT MSVC)
    add_compile_options(-fsanitize=address,undefined -fno-omit-frame-pointer)
    add_link_options(-fsanitize=address,undefined)
endif()

# Submodules
# -----------
add_subdirectory(vendored)
add_subdirectory(bang)
add_subdirectory(game)

if (BANG_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
