# imcmake

CMake project for ImGui

## Requirements
- A C++ compiler that supports C++11

## Building

To build the porject, follow these:

1. Clone this repo
2. Create a `build` directory inside the repository and navigate to it
3. Run `cmake ..` to generate the build files, for example `cmake -G "Unix Makefiles" -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ ../`.
4. Run `make` to build it 

After building the project you should have an executable (or a solution, etc..) in the current directory

## License 
This project is licensed under the [MIT](LICENSE) License.
