# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-sfml-src"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-sfml-build"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/tmp"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src"
  "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/admin/Desktop/Clion Projects/robot/equation/cmake-build-debug/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/${subDir}")
endforeach()
