# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build

# Include any dependencies generated for this target.
include gtest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include gtest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include gtest/CMakeFiles/gtest.dir/flags.make

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: gtest/CMakeFiles/gtest.dir/flags.make
gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock/gtest/src/gtest-all.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build/gtest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock/gtest/src/gtest-all.cc

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build/gtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock/gtest/src/gtest-all.cc > CMakeFiles/gtest.dir/src/gtest-all.cc.i

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build/gtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock/gtest/src/gtest-all.cc -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires:
.PHONY : gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides: gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires
	$(MAKE) -f gtest/CMakeFiles/gtest.dir/build.make gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build
.PHONY : gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build: gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

gtest/libgtest.a: gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
gtest/libgtest.a: gtest/CMakeFiles/gtest.dir/build.make
gtest/libgtest.a: gtest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libgtest.a"
	cd /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build/gtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gtest/CMakeFiles/gtest.dir/build: gtest/libgtest.a
.PHONY : gtest/CMakeFiles/gtest.dir/build

gtest/CMakeFiles/gtest.dir/requires: gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires
.PHONY : gtest/CMakeFiles/gtest.dir/requires

gtest/CMakeFiles/gtest.dir/clean:
	cd /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : gtest/CMakeFiles/gtest.dir/clean

gtest/CMakeFiles/gtest.dir/depend:
	cd /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock/gtest /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build/gtest /home/daniel/Workspace/UnitsOfMeasure/build/test/gmock/src/gmock-build/gtest/CMakeFiles/gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gtest/CMakeFiles/gtest.dir/depend

