# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/задания/crossplatformappdev/lab3/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/задания/crossplatformappdev/lab3/build/cmake_out

# Utility rule file for XMLEditor_automoc.

# Include the progress variables for this target.
include CMakeFiles/XMLEditor_automoc.dir/progress.make

CMakeFiles/XMLEditor_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/student/задания/crossplatformappdev/lab3/build/cmake_out/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc and uic for target XMLEditor"
	/usr/bin/cmake -E cmake_autogen /home/student/задания/crossplatformappdev/lab3/build/cmake_out/CMakeFiles/XMLEditor_automoc.dir/ ""

XMLEditor_automoc: CMakeFiles/XMLEditor_automoc
XMLEditor_automoc: CMakeFiles/XMLEditor_automoc.dir/build.make

.PHONY : XMLEditor_automoc

# Rule to build all files generated by this target.
CMakeFiles/XMLEditor_automoc.dir/build: XMLEditor_automoc

.PHONY : CMakeFiles/XMLEditor_automoc.dir/build

CMakeFiles/XMLEditor_automoc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/XMLEditor_automoc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/XMLEditor_automoc.dir/clean

CMakeFiles/XMLEditor_automoc.dir/depend:
	cd /home/student/задания/crossplatformappdev/lab3/build/cmake_out && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/задания/crossplatformappdev/lab3/source /home/student/задания/crossplatformappdev/lab3/source /home/student/задания/crossplatformappdev/lab3/build/cmake_out /home/student/задания/crossplatformappdev/lab3/build/cmake_out /home/student/задания/crossplatformappdev/lab3/build/cmake_out/CMakeFiles/XMLEditor_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/XMLEditor_automoc.dir/depend
