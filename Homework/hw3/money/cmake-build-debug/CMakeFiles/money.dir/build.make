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
CMAKE_SOURCE_DIR = /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/money.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/money.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/money.dir/flags.make

CMakeFiles/money.dir/main.cpp.o: CMakeFiles/money.dir/flags.make
CMakeFiles/money.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/money.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/money.dir/main.cpp.o -c /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/main.cpp

CMakeFiles/money.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/money.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/main.cpp > CMakeFiles/money.dir/main.cpp.i

CMakeFiles/money.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/money.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/main.cpp -o CMakeFiles/money.dir/main.cpp.s

CMakeFiles/money.dir/Money.cpp.o: CMakeFiles/money.dir/flags.make
CMakeFiles/money.dir/Money.cpp.o: ../Money.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/money.dir/Money.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/money.dir/Money.cpp.o -c /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/Money.cpp

CMakeFiles/money.dir/Money.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/money.dir/Money.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/Money.cpp > CMakeFiles/money.dir/Money.cpp.i

CMakeFiles/money.dir/Money.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/money.dir/Money.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/Money.cpp -o CMakeFiles/money.dir/Money.cpp.s

# Object files for target money
money_OBJECTS = \
"CMakeFiles/money.dir/main.cpp.o" \
"CMakeFiles/money.dir/Money.cpp.o"

# External object files for target money
money_EXTERNAL_OBJECTS =

money: CMakeFiles/money.dir/main.cpp.o
money: CMakeFiles/money.dir/Money.cpp.o
money: CMakeFiles/money.dir/build.make
money: CMakeFiles/money.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable money"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/money.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/money.dir/build: money
.PHONY : CMakeFiles/money.dir/build

CMakeFiles/money.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/money.dir/cmake_clean.cmake
.PHONY : CMakeFiles/money.dir/clean

CMakeFiles/money.dir/depend:
	cd /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/cmake-build-debug /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/cmake-build-debug /Users/bernardlaughlin/Desktop/Code/C++/cs202/Homework/hw3/money/cmake-build-debug/CMakeFiles/money.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/money.dir/depend

