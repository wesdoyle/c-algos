# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wes/projects/c-algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wes/projects/c-algorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/city_pop.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/city_pop.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/city_pop.dir/flags.make

CMakeFiles/city_pop.dir/linked-list-city-population.c.o: CMakeFiles/city_pop.dir/flags.make
CMakeFiles/city_pop.dir/linked-list-city-population.c.o: ../linked-list-city-population.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wes/projects/c-algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/city_pop.dir/linked-list-city-population.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/city_pop.dir/linked-list-city-population.c.o   -c /Users/wes/projects/c-algorithms/linked-list-city-population.c

CMakeFiles/city_pop.dir/linked-list-city-population.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/city_pop.dir/linked-list-city-population.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wes/projects/c-algorithms/linked-list-city-population.c > CMakeFiles/city_pop.dir/linked-list-city-population.c.i

CMakeFiles/city_pop.dir/linked-list-city-population.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/city_pop.dir/linked-list-city-population.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wes/projects/c-algorithms/linked-list-city-population.c -o CMakeFiles/city_pop.dir/linked-list-city-population.c.s

CMakeFiles/city_pop.dir/linked-list-city-population.c.o.requires:

.PHONY : CMakeFiles/city_pop.dir/linked-list-city-population.c.o.requires

CMakeFiles/city_pop.dir/linked-list-city-population.c.o.provides: CMakeFiles/city_pop.dir/linked-list-city-population.c.o.requires
	$(MAKE) -f CMakeFiles/city_pop.dir/build.make CMakeFiles/city_pop.dir/linked-list-city-population.c.o.provides.build
.PHONY : CMakeFiles/city_pop.dir/linked-list-city-population.c.o.provides

CMakeFiles/city_pop.dir/linked-list-city-population.c.o.provides.build: CMakeFiles/city_pop.dir/linked-list-city-population.c.o


# Object files for target city_pop
city_pop_OBJECTS = \
"CMakeFiles/city_pop.dir/linked-list-city-population.c.o"

# External object files for target city_pop
city_pop_EXTERNAL_OBJECTS =

city_pop: CMakeFiles/city_pop.dir/linked-list-city-population.c.o
city_pop: CMakeFiles/city_pop.dir/build.make
city_pop: CMakeFiles/city_pop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wes/projects/c-algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable city_pop"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/city_pop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/city_pop.dir/build: city_pop

.PHONY : CMakeFiles/city_pop.dir/build

CMakeFiles/city_pop.dir/requires: CMakeFiles/city_pop.dir/linked-list-city-population.c.o.requires

.PHONY : CMakeFiles/city_pop.dir/requires

CMakeFiles/city_pop.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/city_pop.dir/cmake_clean.cmake
.PHONY : CMakeFiles/city_pop.dir/clean

CMakeFiles/city_pop.dir/depend:
	cd /Users/wes/projects/c-algorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wes/projects/c-algorithms /Users/wes/projects/c-algorithms /Users/wes/projects/c-algorithms/cmake-build-debug /Users/wes/projects/c-algorithms/cmake-build-debug /Users/wes/projects/c-algorithms/cmake-build-debug/CMakeFiles/city_pop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/city_pop.dir/depend

