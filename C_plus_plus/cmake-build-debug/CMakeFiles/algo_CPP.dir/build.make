# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = C:\program_install\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\program_install\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/algo_CPP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/algo_CPP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/algo_CPP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/algo_CPP.dir/flags.make

CMakeFiles/algo_CPP.dir/main.cpp.obj: CMakeFiles/algo_CPP.dir/flags.make
CMakeFiles/algo_CPP.dir/main.cpp.obj: C:/GIthub_code/Data-structure-and-algorithm-library/C_plus_plus/main.cpp
CMakeFiles/algo_CPP.dir/main.cpp.obj: CMakeFiles/algo_CPP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/algo_CPP.dir/main.cpp.obj"
	C:\program_install\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/algo_CPP.dir/main.cpp.obj -MF CMakeFiles\algo_CPP.dir\main.cpp.obj.d -o CMakeFiles\algo_CPP.dir\main.cpp.obj -c C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus\main.cpp

CMakeFiles/algo_CPP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/algo_CPP.dir/main.cpp.i"
	C:\program_install\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus\main.cpp > CMakeFiles\algo_CPP.dir\main.cpp.i

CMakeFiles/algo_CPP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/algo_CPP.dir/main.cpp.s"
	C:\program_install\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus\main.cpp -o CMakeFiles\algo_CPP.dir\main.cpp.s

# Object files for target algo_CPP
algo_CPP_OBJECTS = \
"CMakeFiles/algo_CPP.dir/main.cpp.obj"

# External object files for target algo_CPP
algo_CPP_EXTERNAL_OBJECTS =

algo_CPP.exe: CMakeFiles/algo_CPP.dir/main.cpp.obj
algo_CPP.exe: CMakeFiles/algo_CPP.dir/build.make
algo_CPP.exe: CMakeFiles/algo_CPP.dir/linkLibs.rsp
algo_CPP.exe: CMakeFiles/algo_CPP.dir/objects1.rsp
algo_CPP.exe: CMakeFiles/algo_CPP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable algo_CPP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\algo_CPP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/algo_CPP.dir/build: algo_CPP.exe
.PHONY : CMakeFiles/algo_CPP.dir/build

CMakeFiles/algo_CPP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\algo_CPP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/algo_CPP.dir/clean

CMakeFiles/algo_CPP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus\cmake-build-debug C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus\cmake-build-debug C:\GIthub_code\Data-structure-and-algorithm-library\C_plus_plus\cmake-build-debug\CMakeFiles\algo_CPP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/algo_CPP.dir/depend

