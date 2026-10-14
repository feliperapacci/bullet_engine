# Bullet Awkward Engine (BANG)

A game engine written with C++/OpenGL aimed to create FPS games. The true objective of this project is to play around with 3D rendering, test all sorts of optimizations (CPU, GPU, rendering, memory, and potentially network), and have fun.

---

## Compiling, Running, Testing, and Benchmarking with CMake

### Compiling
Run the following inside the main directory:
```
cmake -B build -S .
cmake --build build
```

### Running
Executables will usually come from the `game/` directory, that contains games created with the engine. The library ships with a default game called "bullet", it - along with other executables such as test and benchmark - can be found in `build/bin`.

### Testing
Testing is done through Google Test, it is implemented in the test/ folder, the tests can be ran through two ways:
1. Run the executable in `build/bin/bang_tests`
2. Run `ctest --test-dir build --output-on-failure`

### Benchmarking
In progress...

---

## Project structure (AI-Aided)

```
bullet_awkward_engine/
├── CMakeLists.txt              # project(), options, add_subdirectory()
├── CMakePresets.json           # debug / release / asan, Ninja, compile_commands.json
├── cmake/
│   ├── Dependencies.cmake      # FetchContent, pinned tags, SYSTEM includes
│   ├── CompilerWarnings.cmake  # eng_set_warnings(target)
│   └── Sanitizers.cmake        # ASan + UBSan option
├── vendored/                   # Third-Party Libraries
├── bang/                       # The Engine
│   ├── core/       include/bang/core/,     src/   # logging, asserts, basic types
│   ├── platform/   include/bang/platform/, src/   # window, input, clock (SDL3 lives here only)
│   ├── renderer/   include/bang/renderer/, src/   # shaders, buffers, meshes (GL lives here only)
│   └── scene/      include/bang/scene/,    src/   # camera, transforms, level data
├── game/src/main.cpp           # the game exectuable, links to the engine
├── tests/                      # GoogleTest?
├── bench/                      # Google Benchmark?
├── assets/{shaders,levels, models, textures}/
├── docs/{decisions/, roadmap.md}
└── README.md
```
