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
CMAKE_SOURCE_DIR = /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/build

# Include any dependencies generated for this target.
include CMakeFiles/leapyear.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/leapyear.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/leapyear.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leapyear.dir/flags.make

CMakeFiles/leapyear.dir/LeapYear/test.c.o: CMakeFiles/leapyear.dir/flags.make
CMakeFiles/leapyear.dir/LeapYear/test.c.o: ../LeapYear/test.c
CMakeFiles/leapyear.dir/LeapYear/test.c.o: CMakeFiles/leapyear.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/leapyear.dir/LeapYear/test.c.o"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/leapyear.dir/LeapYear/test.c.o -MF CMakeFiles/leapyear.dir/LeapYear/test.c.o.d -o CMakeFiles/leapyear.dir/LeapYear/test.c.o -c /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/LeapYear/test.c

CMakeFiles/leapyear.dir/LeapYear/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leapyear.dir/LeapYear/test.c.i"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/LeapYear/test.c > CMakeFiles/leapyear.dir/LeapYear/test.c.i

CMakeFiles/leapyear.dir/LeapYear/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leapyear.dir/LeapYear/test.c.s"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/LeapYear/test.c -o CMakeFiles/leapyear.dir/LeapYear/test.c.s

# Object files for target leapyear
leapyear_OBJECTS = \
"CMakeFiles/leapyear.dir/LeapYear/test.c.o"

# External object files for target leapyear
leapyear_EXTERNAL_OBJECTS =

leapyear: CMakeFiles/leapyear.dir/LeapYear/test.c.o
leapyear: CMakeFiles/leapyear.dir/build.make
leapyear: CMakeFiles/leapyear.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable leapyear"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leapyear.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leapyear.dir/build: leapyear
.PHONY : CMakeFiles/leapyear.dir/build

CMakeFiles/leapyear.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leapyear.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leapyear.dir/clean

CMakeFiles/leapyear.dir/depend:
	cd /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/build /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/build /home/s23380345@unn.global/Pikhotskiy/BEST_3823B1FI3/2-if_else_switch/build/CMakeFiles/leapyear.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leapyear.dir/depend

