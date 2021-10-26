# base_library

This project is a base for quickly setting up C++ library projects, setting up:
- CMake as build system
- Catch2 as testing framework
- Directory structure where
  - tests go under "test" directory
  - library source files and private headers go under "src" directory
  - library public header files go under "src/include/library" directory (rename library to the right library name)
- My preferred .clang-format and .clang-tidy configuration
