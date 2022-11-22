# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-src"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-build"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-subbuild/imgui-populate-prefix"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-subbuild/imgui-populate-prefix/tmp"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-subbuild/imgui-populate-prefix/src/imgui-populate-stamp"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-subbuild/imgui-populate-prefix/src"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-subbuild/imgui-populate-prefix/src/imgui-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-subbuild/imgui-populate-prefix/src/imgui-populate-stamp/${subDir}")
endforeach()
