# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Krzysztof\Documents\GitHub\JiPP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug

# Include any dependencies generated for this target.
include lab6/CMakeFiles/lab6.dir/depend.make
# Include the progress variables for this target.
include lab6/CMakeFiles/lab6.dir/progress.make

# Include the compile flags for this target's objects.
include lab6/CMakeFiles/lab6.dir/flags.make

lab6/CMakeFiles/lab6.dir/src/main.cpp.obj: lab6/CMakeFiles/lab6.dir/flags.make
lab6/CMakeFiles/lab6.dir/src/main.cpp.obj: lab6/CMakeFiles/lab6.dir/includes_CXX.rsp
lab6/CMakeFiles/lab6.dir/src/main.cpp.obj: ../lab6/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lab6/CMakeFiles/lab6.dir/src/main.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab6.dir\src\main.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6\src\main.cpp

lab6/CMakeFiles/lab6.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab6.dir/src/main.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6\src\main.cpp > CMakeFiles\lab6.dir\src\main.cpp.i

lab6/CMakeFiles/lab6.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab6.dir/src/main.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6\src\main.cpp -o CMakeFiles\lab6.dir\src\main.cpp.s

lab6/CMakeFiles/lab6.dir/src/Vector.cpp.obj: lab6/CMakeFiles/lab6.dir/flags.make
lab6/CMakeFiles/lab6.dir/src/Vector.cpp.obj: lab6/CMakeFiles/lab6.dir/includes_CXX.rsp
lab6/CMakeFiles/lab6.dir/src/Vector.cpp.obj: ../lab6/src/Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lab6/CMakeFiles/lab6.dir/src/Vector.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab6.dir\src\Vector.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6\src\Vector.cpp

lab6/CMakeFiles/lab6.dir/src/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab6.dir/src/Vector.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6\src\Vector.cpp > CMakeFiles\lab6.dir\src\Vector.cpp.i

lab6/CMakeFiles/lab6.dir/src/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab6.dir/src/Vector.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6\src\Vector.cpp -o CMakeFiles\lab6.dir\src\Vector.cpp.s

lab6/CMakeFiles/lab6.dir/src/Node.cpp.obj: lab6/CMakeFiles/lab6.dir/flags.make
lab6/CMakeFiles/lab6.dir/src/Node.cpp.obj: lab6/CMakeFiles/lab6.dir/includes_CXX.rsp
lab6/CMakeFiles/lab6.dir/src/Node.cpp.obj: ../lab6/src/Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lab6/CMakeFiles/lab6.dir/src/Node.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab6.dir\src\Node.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6\src\Node.cpp

lab6/CMakeFiles/lab6.dir/src/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab6.dir/src/Node.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6\src\Node.cpp > CMakeFiles\lab6.dir\src\Node.cpp.i

lab6/CMakeFiles/lab6.dir/src/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab6.dir/src/Node.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6\src\Node.cpp -o CMakeFiles\lab6.dir\src\Node.cpp.s

# Object files for target lab6
lab6_OBJECTS = \
"CMakeFiles/lab6.dir/src/main.cpp.obj" \
"CMakeFiles/lab6.dir/src/Vector.cpp.obj" \
"CMakeFiles/lab6.dir/src/Node.cpp.obj"

# External object files for target lab6
lab6_EXTERNAL_OBJECTS =

lab6/lab6.exe: lab6/CMakeFiles/lab6.dir/src/main.cpp.obj
lab6/lab6.exe: lab6/CMakeFiles/lab6.dir/src/Vector.cpp.obj
lab6/lab6.exe: lab6/CMakeFiles/lab6.dir/src/Node.cpp.obj
lab6/lab6.exe: lab6/CMakeFiles/lab6.dir/build.make
lab6/lab6.exe: lab6/CMakeFiles/lab6.dir/linklibs.rsp
lab6/lab6.exe: lab6/CMakeFiles/lab6.dir/objects1.rsp
lab6/lab6.exe: lab6/CMakeFiles/lab6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable lab6.exe"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lab6/CMakeFiles/lab6.dir/build: lab6/lab6.exe
.PHONY : lab6/CMakeFiles/lab6.dir/build

lab6/CMakeFiles/lab6.dir/clean:
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 && $(CMAKE_COMMAND) -P CMakeFiles\lab6.dir\cmake_clean.cmake
.PHONY : lab6/CMakeFiles/lab6.dir/clean

lab6/CMakeFiles/lab6.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Krzysztof\Documents\GitHub\JiPP2 C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab6 C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6 C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab6\CMakeFiles\lab6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lab6/CMakeFiles/lab6.dir/depend

