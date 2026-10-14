# Executable
add_executable(bullet src/main.cpp)
target_link_libraries(bullet PRIVATE engine_Core engine_renderer engine_platform)

# Adds warnings from cmake/Warnings.cmake
bullet_engine_set_warnings(bullet)

# Defines where engine assets live, so game runs from any directory
target_compile_definitions(game PRIVATE
    BULLET_ASSET_DIR="${PROJECT_SOURCE_DIR}/assets/")

