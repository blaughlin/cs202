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
CMAKE_SOURCE_DIR = /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tokenizer.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/tokenizer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tokenizer.dir/flags.make

CMakeFiles/tokenizer.dir/tokenizer.cpp.o: CMakeFiles/tokenizer.dir/flags.make
CMakeFiles/tokenizer.dir/tokenizer.cpp.o: ../tokenizer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tokenizer.dir/tokenizer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tokenizer.dir/tokenizer.cpp.o -c /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/tokenizer.cpp

CMakeFiles/tokenizer.dir/tokenizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tokenizer.dir/tokenizer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/tokenizer.cpp > CMakeFiles/tokenizer.dir/tokenizer.cpp.i

CMakeFiles/tokenizer.dir/tokenizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tokenizer.dir/tokenizer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/tokenizer.cpp -o CMakeFiles/tokenizer.dir/tokenizer.cpp.s

CMakeFiles/tokenizer.dir/StopWatch.cpp.o: CMakeFiles/tokenizer.dir/flags.make
CMakeFiles/tokenizer.dir/StopWatch.cpp.o: ../StopWatch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tokenizer.dir/StopWatch.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tokenizer.dir/StopWatch.cpp.o -c /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/StopWatch.cpp

CMakeFiles/tokenizer.dir/StopWatch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tokenizer.dir/StopWatch.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/StopWatch.cpp > CMakeFiles/tokenizer.dir/StopWatch.cpp.i

CMakeFiles/tokenizer.dir/StopWatch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tokenizer.dir/StopWatch.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/StopWatch.cpp -o CMakeFiles/tokenizer.dir/StopWatch.cpp.s

# Object files for target tokenizer
tokenizer_OBJECTS = \
"CMakeFiles/tokenizer.dir/tokenizer.cpp.o" \
"CMakeFiles/tokenizer.dir/StopWatch.cpp.o"

# External object files for target tokenizer
tokenizer_EXTERNAL_OBJECTS =

tokenizer: CMakeFiles/tokenizer.dir/tokenizer.cpp.o
tokenizer: CMakeFiles/tokenizer.dir/StopWatch.cpp.o
tokenizer: CMakeFiles/tokenizer.dir/build.make
tokenizer: CMakeFiles/tokenizer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable tokenizer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tokenizer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tokenizer.dir/build: tokenizer
.PHONY : CMakeFiles/tokenizer.dir/build

CMakeFiles/tokenizer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tokenizer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tokenizer.dir/clean

CMakeFiles/tokenizer.dir/depend:
	cd /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/cmake-build-debug /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/cmake-build-debug /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/tokenizer/cmake-build-debug/CMakeFiles/tokenizer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tokenizer.dir/depend

