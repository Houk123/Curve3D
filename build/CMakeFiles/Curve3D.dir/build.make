# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/kirill/c++/Curve3D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kirill/c++/Curve3D/build

# Include any dependencies generated for this target.
include CMakeFiles/Curve3D.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Curve3D.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Curve3D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Curve3D.dir/flags.make

CMakeFiles/Curve3D.dir/src/main.cpp.o: CMakeFiles/Curve3D.dir/flags.make
CMakeFiles/Curve3D.dir/src/main.cpp.o: /home/kirill/c++/Curve3D/src/main.cpp
CMakeFiles/Curve3D.dir/src/main.cpp.o: CMakeFiles/Curve3D.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kirill/c++/Curve3D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Curve3D.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Curve3D.dir/src/main.cpp.o -MF CMakeFiles/Curve3D.dir/src/main.cpp.o.d -o CMakeFiles/Curve3D.dir/src/main.cpp.o -c /home/kirill/c++/Curve3D/src/main.cpp

CMakeFiles/Curve3D.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Curve3D.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kirill/c++/Curve3D/src/main.cpp > CMakeFiles/Curve3D.dir/src/main.cpp.i

CMakeFiles/Curve3D.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Curve3D.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kirill/c++/Curve3D/src/main.cpp -o CMakeFiles/Curve3D.dir/src/main.cpp.s

# Object files for target Curve3D
Curve3D_OBJECTS = \
"CMakeFiles/Curve3D.dir/src/main.cpp.o"

# External object files for target Curve3D
Curve3D_EXTERNAL_OBJECTS =

Curve3D: CMakeFiles/Curve3D.dir/src/main.cpp.o
Curve3D: CMakeFiles/Curve3D.dir/build.make
Curve3D: libCurveLB.so
Curve3D: CMakeFiles/Curve3D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/kirill/c++/Curve3D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Curve3D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Curve3D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Curve3D.dir/build: Curve3D
.PHONY : CMakeFiles/Curve3D.dir/build

CMakeFiles/Curve3D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Curve3D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Curve3D.dir/clean

CMakeFiles/Curve3D.dir/depend:
	cd /home/kirill/c++/Curve3D/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kirill/c++/Curve3D /home/kirill/c++/Curve3D /home/kirill/c++/Curve3D/build /home/kirill/c++/Curve3D/build /home/kirill/c++/Curve3D/build/CMakeFiles/Curve3D.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Curve3D.dir/depend
