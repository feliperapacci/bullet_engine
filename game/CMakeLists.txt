# Executable
add_executable(bullet 
    src/main.cpp
)

target_include_directories(bullet PRIVATE include)

target_link_libraries(bullet PRIVATE 
    bang_core  
    bang_platform 
    bang_scene 
    bang_renderer
)

# Adds warnings from cmake/Warnings.cmake
bang_set_warnings(bullet)

# Defines where engine assets live, so game runs from any directory
target_compile_definitions(bullet PRIVATE
    BULLET_ASSET_DIR="${PROJECT_SOURCE_DIR}/assets/")

