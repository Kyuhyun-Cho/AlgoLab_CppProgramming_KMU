# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/chokyuhyun/CLionProjects/C++_algolab

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chokyuhyun/CLionProjects/C++_algolab/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C___al.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C___al.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C___al.dir/flags.make

CMakeFiles/C___al.dir/kj.cpp.o: CMakeFiles/C___al.dir/flags.make
CMakeFiles/C___al.dir/kj.cpp.o: ../kj.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chokyuhyun/CLionProjects/C++_algolab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C___al.dir/kj.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/C___al.dir/kj.cpp.o -c /Users/chokyuhyun/CLionProjects/C++_algolab/kj.cpp

CMakeFiles/C___al.dir/kj.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C___al.dir/kj.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chokyuhyun/CLionProjects/C++_algolab/kj.cpp > CMakeFiles/C___al.dir/kj.cpp.i

CMakeFiles/C___al.dir/kj.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C___al.dir/kj.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chokyuhyun/CLionProjects/C++_algolab/kj.cpp -o CMakeFiles/C___al.dir/kj.cpp.s

# Object files for target C___al
C___al_OBJECTS = \
"CMakeFiles/C___al.dir/kj.cpp.o"

# External object files for target C___al
C___al_EXTERNAL_OBJECTS =

C___al: CMakeFiles/C___al.dir/kj.cpp.o
C___al: CMakeFiles/C___al.dir/build.make
C___al: CMakeFiles/C___al.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chokyuhyun/CLionProjects/C++_algolab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C___al"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C___al.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C___al.dir/build: C___al

.PHONY : CMakeFiles/C___al.dir/build

CMakeFiles/C___al.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C___al.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C___al.dir/clean

CMakeFiles/C___al.dir/depend:
	cd /Users/chokyuhyun/CLionProjects/C++_algolab/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chokyuhyun/CLionProjects/C++_algolab /Users/chokyuhyun/CLionProjects/C++_algolab /Users/chokyuhyun/CLionProjects/C++_algolab/cmake-build-debug /Users/chokyuhyun/CLionProjects/C++_algolab/cmake-build-debug /Users/chokyuhyun/CLionProjects/C++_algolab/cmake-build-debug/CMakeFiles/C___al.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C___al.dir/depend

