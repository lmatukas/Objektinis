# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "/Users/mac/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/mac/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac/CLionProjects/Objektinis

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/CLionProjects/Objektinis/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Konstruktoroius.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Konstruktoroius.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Konstruktoroius.dir/flags.make

CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.o: CMakeFiles/Konstruktoroius.dir/flags.make
CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.o: ../Konstruktorius/Konstruktoroius.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/CLionProjects/Objektinis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.o -c /Users/mac/CLionProjects/Objektinis/Konstruktorius/Konstruktoroius.cpp

CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/CLionProjects/Objektinis/Konstruktorius/Konstruktoroius.cpp > CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.i

CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/CLionProjects/Objektinis/Konstruktorius/Konstruktoroius.cpp -o CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.s

# Object files for target Konstruktoroius
Konstruktoroius_OBJECTS = \
"CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.o"

# External object files for target Konstruktoroius
Konstruktoroius_EXTERNAL_OBJECTS =

Konstruktoroius: CMakeFiles/Konstruktoroius.dir/Konstruktorius/Konstruktoroius.cpp.o
Konstruktoroius: CMakeFiles/Konstruktoroius.dir/build.make
Konstruktoroius: CMakeFiles/Konstruktoroius.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/CLionProjects/Objektinis/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Konstruktoroius"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Konstruktoroius.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Konstruktoroius.dir/build: Konstruktoroius

.PHONY : CMakeFiles/Konstruktoroius.dir/build

CMakeFiles/Konstruktoroius.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Konstruktoroius.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Konstruktoroius.dir/clean

CMakeFiles/Konstruktoroius.dir/depend:
	cd /Users/mac/CLionProjects/Objektinis/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/CLionProjects/Objektinis /Users/mac/CLionProjects/Objektinis /Users/mac/CLionProjects/Objektinis/cmake-build-debug /Users/mac/CLionProjects/Objektinis/cmake-build-debug /Users/mac/CLionProjects/Objektinis/cmake-build-debug/CMakeFiles/Konstruktoroius.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Konstruktoroius.dir/depend
