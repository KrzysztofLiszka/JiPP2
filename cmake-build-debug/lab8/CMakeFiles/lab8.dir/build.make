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
include lab8/CMakeFiles/lab8.dir/depend.make
# Include the progress variables for this target.
include lab8/CMakeFiles/lab8.dir/progress.make

# Include the compile flags for this target's objects.
include lab8/CMakeFiles/lab8.dir/flags.make

lab8/CMakeFiles/lab8.dir/src/main.cpp.obj: lab8/CMakeFiles/lab8.dir/flags.make
lab8/CMakeFiles/lab8.dir/src/main.cpp.obj: ../lab8/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lab8/CMakeFiles/lab8.dir/src/main.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab8.dir\src\main.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab8\src\main.cpp

lab8/CMakeFiles/lab8.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab8.dir/src/main.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab8\src\main.cpp > CMakeFiles\lab8.dir\src\main.cpp.i

lab8/CMakeFiles/lab8.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab8.dir/src/main.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab8\src\main.cpp -o CMakeFiles\lab8.dir\src\main.cpp.s

lab8/CMakeFiles/lab8.dir/src/TextNote.cpp.obj: lab8/CMakeFiles/lab8.dir/flags.make
lab8/CMakeFiles/lab8.dir/src/TextNote.cpp.obj: ../lab8/src/TextNote.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lab8/CMakeFiles/lab8.dir/src/TextNote.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab8.dir\src\TextNote.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab8\src\TextNote.cpp

lab8/CMakeFiles/lab8.dir/src/TextNote.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab8.dir/src/TextNote.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab8\src\TextNote.cpp > CMakeFiles\lab8.dir\src\TextNote.cpp.i

lab8/CMakeFiles/lab8.dir/src/TextNote.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab8.dir/src/TextNote.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab8\src\TextNote.cpp -o CMakeFiles\lab8.dir\src\TextNote.cpp.s

# Object files for target lab8
lab8_OBJECTS = \
"CMakeFiles/lab8.dir/src/main.cpp.obj" \
"CMakeFiles/lab8.dir/src/TextNote.cpp.obj"

# External object files for target lab8
lab8_EXTERNAL_OBJECTS =

lab8/lab8.exe: lab8/CMakeFiles/lab8.dir/src/main.cpp.obj
lab8/lab8.exe: lab8/CMakeFiles/lab8.dir/src/TextNote.cpp.obj
lab8/lab8.exe: lab8/CMakeFiles/lab8.dir/build.make
lab8/lab8.exe: lab8/CMakeFiles/lab8.dir/linklibs.rsp
lab8/lab8.exe: lab8/CMakeFiles/lab8.dir/objects1.rsp
lab8/lab8.exe: lab8/CMakeFiles/lab8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lab8.exe"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lab8/CMakeFiles/lab8.dir/build: lab8/lab8.exe
.PHONY : lab8/CMakeFiles/lab8.dir/build

lab8/CMakeFiles/lab8.dir/clean:
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8 && $(CMAKE_COMMAND) -P CMakeFiles\lab8.dir\cmake_clean.cmake
.PHONY : lab8/CMakeFiles/lab8.dir/clean

lab8/CMakeFiles/lab8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Krzysztof\Documents\GitHub\JiPP2 C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab8 C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8 C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab8\CMakeFiles\lab8.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lab8/CMakeFiles/lab8.dir/depend

