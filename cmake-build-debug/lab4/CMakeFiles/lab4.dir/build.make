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
include lab4/CMakeFiles/lab4.dir/depend.make
# Include the progress variables for this target.
include lab4/CMakeFiles/lab4.dir/progress.make

# Include the compile flags for this target's objects.
include lab4/CMakeFiles/lab4.dir/flags.make

lab4/CMakeFiles/lab4.dir/src/main.cpp.obj: lab4/CMakeFiles/lab4.dir/flags.make
lab4/CMakeFiles/lab4.dir/src/main.cpp.obj: ../lab4/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lab4/CMakeFiles/lab4.dir/src/main.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\src\main.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\main.cpp

lab4/CMakeFiles/lab4.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/src/main.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\main.cpp > CMakeFiles\lab4.dir\src\main.cpp.i

lab4/CMakeFiles/lab4.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/src/main.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\main.cpp -o CMakeFiles\lab4.dir\src\main.cpp.s

lab4/CMakeFiles/lab4.dir/src/functions.cpp.obj: lab4/CMakeFiles/lab4.dir/flags.make
lab4/CMakeFiles/lab4.dir/src/functions.cpp.obj: ../lab4/src/functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lab4/CMakeFiles/lab4.dir/src/functions.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\src\functions.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\functions.cpp

lab4/CMakeFiles/lab4.dir/src/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/src/functions.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\functions.cpp > CMakeFiles\lab4.dir\src\functions.cpp.i

lab4/CMakeFiles/lab4.dir/src/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/src/functions.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\functions.cpp -o CMakeFiles\lab4.dir\src\functions.cpp.s

lab4/CMakeFiles/lab4.dir/src/Cuboid.cpp.obj: lab4/CMakeFiles/lab4.dir/flags.make
lab4/CMakeFiles/lab4.dir/src/Cuboid.cpp.obj: ../lab4/src/Cuboid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lab4/CMakeFiles/lab4.dir/src/Cuboid.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\src\Cuboid.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Cuboid.cpp

lab4/CMakeFiles/lab4.dir/src/Cuboid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/src/Cuboid.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Cuboid.cpp > CMakeFiles\lab4.dir\src\Cuboid.cpp.i

lab4/CMakeFiles/lab4.dir/src/Cuboid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/src/Cuboid.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Cuboid.cpp -o CMakeFiles\lab4.dir\src\Cuboid.cpp.s

lab4/CMakeFiles/lab4.dir/src/Sphere.cpp.obj: lab4/CMakeFiles/lab4.dir/flags.make
lab4/CMakeFiles/lab4.dir/src/Sphere.cpp.obj: ../lab4/src/Sphere.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lab4/CMakeFiles/lab4.dir/src/Sphere.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\src\Sphere.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Sphere.cpp

lab4/CMakeFiles/lab4.dir/src/Sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/src/Sphere.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Sphere.cpp > CMakeFiles\lab4.dir\src\Sphere.cpp.i

lab4/CMakeFiles/lab4.dir/src/Sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/src/Sphere.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Sphere.cpp -o CMakeFiles\lab4.dir\src\Sphere.cpp.s

lab4/CMakeFiles/lab4.dir/src/QuadraticFunction.cpp.obj: lab4/CMakeFiles/lab4.dir/flags.make
lab4/CMakeFiles/lab4.dir/src/QuadraticFunction.cpp.obj: ../lab4/src/QuadraticFunction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lab4/CMakeFiles/lab4.dir/src/QuadraticFunction.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\src\QuadraticFunction.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\QuadraticFunction.cpp

lab4/CMakeFiles/lab4.dir/src/QuadraticFunction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/src/QuadraticFunction.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\QuadraticFunction.cpp > CMakeFiles\lab4.dir\src\QuadraticFunction.cpp.i

lab4/CMakeFiles/lab4.dir/src/QuadraticFunction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/src/QuadraticFunction.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\QuadraticFunction.cpp -o CMakeFiles\lab4.dir\src\QuadraticFunction.cpp.s

lab4/CMakeFiles/lab4.dir/src/Student.cpp.obj: lab4/CMakeFiles/lab4.dir/flags.make
lab4/CMakeFiles/lab4.dir/src/Student.cpp.obj: ../lab4/src/Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lab4/CMakeFiles/lab4.dir/src/Student.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\src\Student.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Student.cpp

lab4/CMakeFiles/lab4.dir/src/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/src/Student.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Student.cpp > CMakeFiles\lab4.dir\src\Student.cpp.i

lab4/CMakeFiles/lab4.dir/src/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/src/Student.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Student.cpp -o CMakeFiles\lab4.dir\src\Student.cpp.s

lab4/CMakeFiles/lab4.dir/src/Punkt.cpp.obj: lab4/CMakeFiles/lab4.dir/flags.make
lab4/CMakeFiles/lab4.dir/src/Punkt.cpp.obj: ../lab4/src/Punkt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object lab4/CMakeFiles/lab4.dir/src/Punkt.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\src\Punkt.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Punkt.cpp

lab4/CMakeFiles/lab4.dir/src/Punkt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/src/Punkt.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Punkt.cpp > CMakeFiles\lab4.dir\src\Punkt.cpp.i

lab4/CMakeFiles/lab4.dir/src/Punkt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/src/Punkt.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Punkt.cpp -o CMakeFiles\lab4.dir\src\Punkt.cpp.s

lab4/CMakeFiles/lab4.dir/src/Figura.cpp.obj: lab4/CMakeFiles/lab4.dir/flags.make
lab4/CMakeFiles/lab4.dir/src/Figura.cpp.obj: ../lab4/src/Figura.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object lab4/CMakeFiles/lab4.dir/src/Figura.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\src\Figura.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Figura.cpp

lab4/CMakeFiles/lab4.dir/src/Figura.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/src/Figura.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Figura.cpp > CMakeFiles\lab4.dir\src\Figura.cpp.i

lab4/CMakeFiles/lab4.dir/src/Figura.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/src/Figura.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Figura.cpp -o CMakeFiles\lab4.dir\src\Figura.cpp.s

lab4/CMakeFiles/lab4.dir/src/Destructor.cpp.obj: lab4/CMakeFiles/lab4.dir/flags.make
lab4/CMakeFiles/lab4.dir/src/Destructor.cpp.obj: ../lab4/src/Destructor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object lab4/CMakeFiles/lab4.dir/src/Destructor.cpp.obj"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\src\Destructor.cpp.obj -c C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Destructor.cpp

lab4/CMakeFiles/lab4.dir/src/Destructor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/src/Destructor.cpp.i"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Destructor.cpp > CMakeFiles\lab4.dir\src\Destructor.cpp.i

lab4/CMakeFiles/lab4.dir/src/Destructor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/src/Destructor.cpp.s"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4\src\Destructor.cpp -o CMakeFiles\lab4.dir\src\Destructor.cpp.s

# Object files for target lab4
lab4_OBJECTS = \
"CMakeFiles/lab4.dir/src/main.cpp.obj" \
"CMakeFiles/lab4.dir/src/functions.cpp.obj" \
"CMakeFiles/lab4.dir/src/Cuboid.cpp.obj" \
"CMakeFiles/lab4.dir/src/Sphere.cpp.obj" \
"CMakeFiles/lab4.dir/src/QuadraticFunction.cpp.obj" \
"CMakeFiles/lab4.dir/src/Student.cpp.obj" \
"CMakeFiles/lab4.dir/src/Punkt.cpp.obj" \
"CMakeFiles/lab4.dir/src/Figura.cpp.obj" \
"CMakeFiles/lab4.dir/src/Destructor.cpp.obj"

# External object files for target lab4
lab4_EXTERNAL_OBJECTS =

lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/src/main.cpp.obj
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/src/functions.cpp.obj
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/src/Cuboid.cpp.obj
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/src/Sphere.cpp.obj
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/src/QuadraticFunction.cpp.obj
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/src/Student.cpp.obj
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/src/Punkt.cpp.obj
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/src/Figura.cpp.obj
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/src/Destructor.cpp.obj
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/build.make
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/linklibs.rsp
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/objects1.rsp
lab4/lab4.exe: lab4/CMakeFiles/lab4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable lab4.exe"
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lab4/CMakeFiles/lab4.dir/build: lab4/lab4.exe
.PHONY : lab4/CMakeFiles/lab4.dir/build

lab4/CMakeFiles/lab4.dir/clean:
	cd /d C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 && $(CMAKE_COMMAND) -P CMakeFiles\lab4.dir\cmake_clean.cmake
.PHONY : lab4/CMakeFiles/lab4.dir/clean

lab4/CMakeFiles/lab4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Krzysztof\Documents\GitHub\JiPP2 C:\Users\Krzysztof\Documents\GitHub\JiPP2\lab4 C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4 C:\Users\Krzysztof\Documents\GitHub\JiPP2\cmake-build-debug\lab4\CMakeFiles\lab4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lab4/CMakeFiles/lab4.dir/depend

