# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/artem/Task6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/artem/Task6/build

# Include any dependencies generated for this target.
include src/CMakeFiles/operations.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/operations.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/operations.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/operations.dir/flags.make

src/CMakeFiles/operations.dir/Operations.cpp.o: src/CMakeFiles/operations.dir/flags.make
src/CMakeFiles/operations.dir/Operations.cpp.o: ../src/Operations.cpp
src/CMakeFiles/operations.dir/Operations.cpp.o: src/CMakeFiles/operations.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/artem/Task6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/operations.dir/Operations.cpp.o"
	cd /home/artem/Task6/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/operations.dir/Operations.cpp.o -MF CMakeFiles/operations.dir/Operations.cpp.o.d -o CMakeFiles/operations.dir/Operations.cpp.o -c /home/artem/Task6/src/Operations.cpp

src/CMakeFiles/operations.dir/Operations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/operations.dir/Operations.cpp.i"
	cd /home/artem/Task6/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/artem/Task6/src/Operations.cpp > CMakeFiles/operations.dir/Operations.cpp.i

src/CMakeFiles/operations.dir/Operations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/operations.dir/Operations.cpp.s"
	cd /home/artem/Task6/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/artem/Task6/src/Operations.cpp -o CMakeFiles/operations.dir/Operations.cpp.s

# Object files for target operations
operations_OBJECTS = \
"CMakeFiles/operations.dir/Operations.cpp.o"

# External object files for target operations
operations_EXTERNAL_OBJECTS =

src/liboperations.a: src/CMakeFiles/operations.dir/Operations.cpp.o
src/liboperations.a: src/CMakeFiles/operations.dir/build.make
src/liboperations.a: src/CMakeFiles/operations.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/artem/Task6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liboperations.a"
	cd /home/artem/Task6/build/src && $(CMAKE_COMMAND) -P CMakeFiles/operations.dir/cmake_clean_target.cmake
	cd /home/artem/Task6/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/operations.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/operations.dir/build: src/liboperations.a
.PHONY : src/CMakeFiles/operations.dir/build

src/CMakeFiles/operations.dir/clean:
	cd /home/artem/Task6/build/src && $(CMAKE_COMMAND) -P CMakeFiles/operations.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/operations.dir/clean

src/CMakeFiles/operations.dir/depend:
	cd /home/artem/Task6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/artem/Task6 /home/artem/Task6/src /home/artem/Task6/build /home/artem/Task6/build/src /home/artem/Task6/build/src/CMakeFiles/operations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/operations.dir/depend

