add_subdirectory(core)
add_subdirectory(platform)
add_subdirectory(renderer)
add_subdirectory(scene)

add_library(bang INTERFACE)
target_link_libraries(bang INTERFACE
    bang_core
    bang_platform
    bang_renderer
    bang_scene
)
