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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.15.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.15.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zou/CLionProjects/LeetCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zou/CLionProjects/LeetCode/build

# Include any dependencies generated for this target.
include Source/CMakeFiles/12_interger_to_roman.dir/depend.make

# Include the progress variables for this target.
include Source/CMakeFiles/12_interger_to_roman.dir/progress.make

# Include the compile flags for this target's objects.
include Source/CMakeFiles/12_interger_to_roman.dir/flags.make

Source/CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.o: Source/CMakeFiles/12_interger_to_roman.dir/flags.make
Source/CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.o: ../Source/12_interger_to_roman.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zou/CLionProjects/LeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Source/CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.o"
	cd /Users/zou/CLionProjects/LeetCode/build/Source && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.o -c /Users/zou/CLionProjects/LeetCode/Source/12_interger_to_roman.cpp

Source/CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.i"
	cd /Users/zou/CLionProjects/LeetCode/build/Source && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zou/CLionProjects/LeetCode/Source/12_interger_to_roman.cpp > CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.i

Source/CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.s"
	cd /Users/zou/CLionProjects/LeetCode/build/Source && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zou/CLionProjects/LeetCode/Source/12_interger_to_roman.cpp -o CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.s

# Object files for target 12_interger_to_roman
12_interger_to_roman_OBJECTS = \
"CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.o"

# External object files for target 12_interger_to_roman
12_interger_to_roman_EXTERNAL_OBJECTS =

Source/12_interger_to_roman: Source/CMakeFiles/12_interger_to_roman.dir/12_interger_to_roman.cpp.o
Source/12_interger_to_roman: Source/CMakeFiles/12_interger_to_roman.dir/build.make
Source/12_interger_to_roman: include/libLeetCode.a
Source/12_interger_to_roman: Source/CMakeFiles/12_interger_to_roman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zou/CLionProjects/LeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 12_interger_to_roman"
	cd /Users/zou/CLionProjects/LeetCode/build/Source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/12_interger_to_roman.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Source/CMakeFiles/12_interger_to_roman.dir/build: Source/12_interger_to_roman

.PHONY : Source/CMakeFiles/12_interger_to_roman.dir/build

Source/CMakeFiles/12_interger_to_roman.dir/clean:
	cd /Users/zou/CLionProjects/LeetCode/build/Source && $(CMAKE_COMMAND) -P CMakeFiles/12_interger_to_roman.dir/cmake_clean.cmake
.PHONY : Source/CMakeFiles/12_interger_to_roman.dir/clean

Source/CMakeFiles/12_interger_to_roman.dir/depend:
	cd /Users/zou/CLionProjects/LeetCode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zou/CLionProjects/LeetCode /Users/zou/CLionProjects/LeetCode/Source /Users/zou/CLionProjects/LeetCode/build /Users/zou/CLionProjects/LeetCode/build/Source /Users/zou/CLionProjects/LeetCode/build/Source/CMakeFiles/12_interger_to_roman.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Source/CMakeFiles/12_interger_to_roman.dir/depend
