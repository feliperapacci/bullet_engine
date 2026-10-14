add_library(bang_core STATIC 
    src/core.cpp
)

target_include_directories(bang_core PUBLIC include)

bang_set_warnings(bang_core)
