add_library(bang_renderer STATIC 
    src/renderer.cpp
)

target_include_directories(bang_renderer PUBLIC include)

bang_set_warnings(bang_renderer)
