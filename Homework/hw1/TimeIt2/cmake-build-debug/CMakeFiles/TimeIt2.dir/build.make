# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TimeIt2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/TimeIt2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TimeIt2.dir/flags.make

CMakeFiles/TimeIt2.dir/TimeIt2.cpp.o: CMakeFiles/TimeIt2.dir/flags.make
CMakeFiles/TimeIt2.dir/TimeIt2.cpp.o: ../TimeIt2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TimeIt2.dir/TimeIt2.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TimeIt2.dir/TimeIt2.cpp.o -c /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/TimeIt2.cpp

CMakeFiles/TimeIt2.dir/TimeIt2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeIt2.dir/TimeIt2.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/TimeIt2.cpp > CMakeFiles/TimeIt2.dir/TimeIt2.cpp.i

CMakeFiles/TimeIt2.dir/TimeIt2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeIt2.dir/TimeIt2.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/TimeIt2.cpp -o CMakeFiles/TimeIt2.dir/TimeIt2.cpp.s

CMakeFiles/TimeIt2.dir/StopWatch.cpp.o: CMakeFiles/TimeIt2.dir/flags.make
CMakeFiles/TimeIt2.dir/StopWatch.cpp.o: ../StopWatch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TimeIt2.dir/StopWatch.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TimeIt2.dir/StopWatch.cpp.o -c /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/StopWatch.cpp

CMakeFiles/TimeIt2.dir/StopWatch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeIt2.dir/StopWatch.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/StopWatch.cpp > CMakeFiles/TimeIt2.dir/StopWatch.cpp.i

CMakeFiles/TimeIt2.dir/StopWatch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeIt2.dir/StopWatch.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/StopWatch.cpp -o CMakeFiles/TimeIt2.dir/StopWatch.cpp.s

# Object files for target TimeIt2
TimeIt2_OBJECTS = \
"CMakeFiles/TimeIt2.dir/TimeIt2.cpp.o" \
"CMakeFiles/TimeIt2.dir/StopWatch.cpp.o"

# External object files for target TimeIt2
TimeIt2_EXTERNAL_OBJECTS =

TimeIt2: CMakeFiles/TimeIt2.dir/TimeIt2.cpp.o
TimeIt2: CMakeFiles/TimeIt2.dir/StopWatch.cpp.o
TimeIt2: CMakeFiles/TimeIt2.dir/build.make
TimeIt2: CMakeFiles/TimeIt2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TimeIt2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TimeIt2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TimeIt2.dir/build: TimeIt2
.PHONY : CMakeFiles/TimeIt2.dir/build

CMakeFiles/TimeIt2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TimeIt2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TimeIt2.dir/clean

CMakeFiles/TimeIt2.dir/depend:
	cd /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2 /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2 /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/cmake-build-debug /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/cmake-build-debug /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw1/TimeIt2/cmake-build-debug/CMakeFiles/TimeIt2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TimeIt2.dir/depend

