# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/admin/Desktop/Clion Projects/robot"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/admin/Desktop/Clion Projects/robot/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/robot.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/robot.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/robot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/robot.dir/flags.make

CMakeFiles/robot.dir/main.cpp.o: CMakeFiles/robot.dir/flags.make
CMakeFiles/robot.dir/main.cpp.o: ../main.cpp
CMakeFiles/robot.dir/main.cpp.o: CMakeFiles/robot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/admin/Desktop/Clion Projects/robot/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/robot.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robot.dir/main.cpp.o -MF CMakeFiles/robot.dir/main.cpp.o.d -o CMakeFiles/robot.dir/main.cpp.o -c "/Users/admin/Desktop/Clion Projects/robot/main.cpp"

CMakeFiles/robot.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/admin/Desktop/Clion Projects/robot/main.cpp" > CMakeFiles/robot.dir/main.cpp.i

CMakeFiles/robot.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/admin/Desktop/Clion Projects/robot/main.cpp" -o CMakeFiles/robot.dir/main.cpp.s

# Object files for target robot
robot_OBJECTS = \
"CMakeFiles/robot.dir/main.cpp.o"

# External object files for target robot
robot_EXTERNAL_OBJECTS =

robot: CMakeFiles/robot.dir/main.cpp.o
robot: CMakeFiles/robot.dir/build.make
robot: CMakeFiles/robot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/admin/Desktop/Clion Projects/robot/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable robot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/robot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/robot.dir/build: robot
.PHONY : CMakeFiles/robot.dir/build

CMakeFiles/robot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/robot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/robot.dir/clean

CMakeFiles/robot.dir/depend:
	cd "/Users/admin/Desktop/Clion Projects/robot/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/admin/Desktop/Clion Projects/robot" "/Users/admin/Desktop/Clion Projects/robot" "/Users/admin/Desktop/Clion Projects/robot/cmake-build-debug" "/Users/admin/Desktop/Clion Projects/robot/cmake-build-debug" "/Users/admin/Desktop/Clion Projects/robot/cmake-build-debug/CMakeFiles/robot.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/robot.dir/depend
