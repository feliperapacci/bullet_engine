#include <bullet.hpp>

#include <iostream>
#include <format>

int main() {
    std::cout << std::format("Core: {}\nRenderer: {}\nPlatform: {}\nScene: {}\n",
                             bang::core_version(),
                             bang::renderer_version(),
                             bang::platform_version(),
                             bang::scene_version()
                             );
}
