add_library(bang_platform STATIC 
    src/platform.cpp
)

target_include_directories(bang_platform PUBLIC include)

bang_set_warnings(bang_platform)
