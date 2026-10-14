# Bullet-Engine

A game engine written with C++/OpenGL that helps create FPS games. The true objective of this project is to play around with 3D rendering, test all sorts of optimizations (CPU, GPU, rendering, memory, and potentially network), and have fun.

---

## Project structure (AI-Generated)

```
bullet-engine/
├── CMakeLists.txt              # project(), options, add_subdirectory()
├── CMakePresets.json           # debug / release / asan, Ninja, compile_commands.json
├── cmake/
│   ├── Dependencies.cmake      # FetchContent, pinned tags, SYSTEM includes
│   ├── CompilerWarnings.cmake  # eng_set_warnings(target)
│   └── Sanitizers.cmake        # ASan + UBSan option
├── vendored/                   # Third-Party Libraries
├── engine/
│   ├── core/       include/eng/core/,     src/   # logging, asserts, basic types
│   ├── platform/   include/eng/platform/, src/   # window, input, clock (SDL3 lives here only)
│   ├── renderer/   include/eng/renderer/, src/   # shaders, buffers, meshes (GL lives here only)
│   └── scene/      include/eng/scene/,    src/   # camera, transforms, level data
├── game/src/main.cpp           # the game exectuable, links to the engine
├── tests/                      # GoogleTest?
├── bench/                      # Google Benchmark?
├── assets/{shaders,levels, models, textures}/
├── docs/{decisions/, roadmap.md}
└── README.md
```

## 
