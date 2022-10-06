# C/C++ Tutorial for CMPUT 603


The goal of this tutorial is to get you up and running using C++ and CMake to build complex systems. This tutorial will not teach you specific language features or the syntax of C++. We also assume you have some competency using the terminal, but it is not required to be an expert. Unfortunately, given constraints on my available operating systems this will only work on OSX and Linux (I test on Ubuntu), so you should look for support for Windows elsewhere (check out Visual Studio or the Ubuntu subsystem).


## Installation

First you need to install a compiler and CMake itself. In this tutorial we will use a C++ compatible compiler (in this case Clang) and CMake v3. In my setup I use [Homebrew](https://brew.sh). For more details on how to install these packages for your specific system see the following:

- Clang: https://clang.llvm.org
- CMake: https://cmake.org

## Running the example

```bash
mkdir build/
cd build/
cmake ..
make
```


