# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.15.5/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.15.5/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jbarbie/Travail/Applications/LeapHue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jbarbie/Travail/Applications/LeapHue/build

# Include any dependencies generated for this target.
include leaphue/CMakeFiles/leaphue.dir/depend.make

# Include the progress variables for this target.
include leaphue/CMakeFiles/leaphue.dir/progress.make

# Include the compile flags for this target's objects.
include leaphue/CMakeFiles/leaphue.dir/flags.make

leaphue/CMakeFiles/leaphue.dir/LeapListener.cpp.o: leaphue/CMakeFiles/leaphue.dir/flags.make
leaphue/CMakeFiles/leaphue.dir/LeapListener.cpp.o: ../leaphue/LeapListener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jbarbie/Travail/Applications/LeapHue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object leaphue/CMakeFiles/leaphue.dir/LeapListener.cpp.o"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leaphue.dir/LeapListener.cpp.o -c /Users/jbarbie/Travail/Applications/LeapHue/leaphue/LeapListener.cpp

leaphue/CMakeFiles/leaphue.dir/LeapListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leaphue.dir/LeapListener.cpp.i"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jbarbie/Travail/Applications/LeapHue/leaphue/LeapListener.cpp > CMakeFiles/leaphue.dir/LeapListener.cpp.i

leaphue/CMakeFiles/leaphue.dir/LeapListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leaphue.dir/LeapListener.cpp.s"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jbarbie/Travail/Applications/LeapHue/leaphue/LeapListener.cpp -o CMakeFiles/leaphue.dir/LeapListener.cpp.s

leaphue/CMakeFiles/leaphue.dir/Light.cpp.o: leaphue/CMakeFiles/leaphue.dir/flags.make
leaphue/CMakeFiles/leaphue.dir/Light.cpp.o: ../leaphue/Light.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jbarbie/Travail/Applications/LeapHue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object leaphue/CMakeFiles/leaphue.dir/Light.cpp.o"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leaphue.dir/Light.cpp.o -c /Users/jbarbie/Travail/Applications/LeapHue/leaphue/Light.cpp

leaphue/CMakeFiles/leaphue.dir/Light.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leaphue.dir/Light.cpp.i"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jbarbie/Travail/Applications/LeapHue/leaphue/Light.cpp > CMakeFiles/leaphue.dir/Light.cpp.i

leaphue/CMakeFiles/leaphue.dir/Light.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leaphue.dir/Light.cpp.s"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jbarbie/Travail/Applications/LeapHue/leaphue/Light.cpp -o CMakeFiles/leaphue.dir/Light.cpp.s

leaphue/CMakeFiles/leaphue.dir/main.cpp.o: leaphue/CMakeFiles/leaphue.dir/flags.make
leaphue/CMakeFiles/leaphue.dir/main.cpp.o: ../leaphue/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jbarbie/Travail/Applications/LeapHue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object leaphue/CMakeFiles/leaphue.dir/main.cpp.o"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leaphue.dir/main.cpp.o -c /Users/jbarbie/Travail/Applications/LeapHue/leaphue/main.cpp

leaphue/CMakeFiles/leaphue.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leaphue.dir/main.cpp.i"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jbarbie/Travail/Applications/LeapHue/leaphue/main.cpp > CMakeFiles/leaphue.dir/main.cpp.i

leaphue/CMakeFiles/leaphue.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leaphue.dir/main.cpp.s"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jbarbie/Travail/Applications/LeapHue/leaphue/main.cpp -o CMakeFiles/leaphue.dir/main.cpp.s

# Object files for target leaphue
leaphue_OBJECTS = \
"CMakeFiles/leaphue.dir/LeapListener.cpp.o" \
"CMakeFiles/leaphue.dir/Light.cpp.o" \
"CMakeFiles/leaphue.dir/main.cpp.o"

# External object files for target leaphue
leaphue_EXTERNAL_OBJECTS =

leaphue/leaphue: leaphue/CMakeFiles/leaphue.dir/LeapListener.cpp.o
leaphue/leaphue: leaphue/CMakeFiles/leaphue.dir/Light.cpp.o
leaphue/leaphue: leaphue/CMakeFiles/leaphue.dir/main.cpp.o
leaphue/leaphue: leaphue/CMakeFiles/leaphue.dir/build.make
leaphue/leaphue: hueplusplus/libhueplusplusstatic.a
leaphue/leaphue: leaphue/CMakeFiles/leaphue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jbarbie/Travail/Applications/LeapHue/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable leaphue"
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leaphue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
leaphue/CMakeFiles/leaphue.dir/build: leaphue/leaphue

.PHONY : leaphue/CMakeFiles/leaphue.dir/build

leaphue/CMakeFiles/leaphue.dir/clean:
	cd /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue && $(CMAKE_COMMAND) -P CMakeFiles/leaphue.dir/cmake_clean.cmake
.PHONY : leaphue/CMakeFiles/leaphue.dir/clean

leaphue/CMakeFiles/leaphue.dir/depend:
	cd /Users/jbarbie/Travail/Applications/LeapHue/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jbarbie/Travail/Applications/LeapHue /Users/jbarbie/Travail/Applications/LeapHue/leaphue /Users/jbarbie/Travail/Applications/LeapHue/build /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue /Users/jbarbie/Travail/Applications/LeapHue/build/leaphue/CMakeFiles/leaphue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : leaphue/CMakeFiles/leaphue.dir/depend

