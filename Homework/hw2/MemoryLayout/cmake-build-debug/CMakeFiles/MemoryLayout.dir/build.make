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
CMAKE_SOURCE_DIR = /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MemoryLayout.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/MemoryLayout.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MemoryLayout.dir/flags.make

CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.o: CMakeFiles/MemoryLayout.dir/flags.make
CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.o: ../MemoryLayout.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.o -c /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/MemoryLayout.cpp

CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/MemoryLayout.cpp > CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.i

CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/MemoryLayout.cpp -o CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.s

# Object files for target MemoryLayout
MemoryLayout_OBJECTS = \
"CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.o"

# External object files for target MemoryLayout
MemoryLayout_EXTERNAL_OBJECTS =

MemoryLayout: CMakeFiles/MemoryLayout.dir/MemoryLayout.cpp.o
MemoryLayout: CMakeFiles/MemoryLayout.dir/build.make
MemoryLayout: CMakeFiles/MemoryLayout.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MemoryLayout"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MemoryLayout.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MemoryLayout.dir/build: MemoryLayout
.PHONY : CMakeFiles/MemoryLayout.dir/build

CMakeFiles/MemoryLayout.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MemoryLayout.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MemoryLayout.dir/clean

CMakeFiles/MemoryLayout.dir/depend:
	cd /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/cmake-build-debug /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/cmake-build-debug /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw2/MemoryLayout/cmake-build-debug/CMakeFiles/MemoryLayout.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MemoryLayout.dir/depend

