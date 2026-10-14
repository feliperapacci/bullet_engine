add_library(bang_scene STATIC 
    src/scene.cpp
)

target_include_directories(bang_scene PUBLIC include)

bang_set_warnings(bang_scene)
