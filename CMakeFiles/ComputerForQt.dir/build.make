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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.20.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.20.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhaodejin/Documents/QData

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhaodejin/Documents/QData

# Include any dependencies generated for this target.
include CMakeFiles/ComputerForQt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ComputerForQt.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ComputerForQt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ComputerForQt.dir/flags.make

CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.o: ComputerForQt_autogen/mocs_compilation.cpp
CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.o -c /Users/zhaodejin/Documents/QData/ComputerForQt_autogen/mocs_compilation.cpp

CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/ComputerForQt_autogen/mocs_compilation.cpp > CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.i

CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/ComputerForQt_autogen/mocs_compilation.cpp -o CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.s

CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.o: src/DataStruct/main.cpp
CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.o -MF CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.o.d -o CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.o -c /Users/zhaodejin/Documents/QData/src/DataStruct/main.cpp

CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/src/DataStruct/main.cpp > CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.i

CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/src/DataStruct/main.cpp -o CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.s

CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.o: src/mainWindow.cpp
CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.o -MF CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.o.d -o CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.o -c /Users/zhaodejin/Documents/QData/src/mainWindow.cpp

CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/src/mainWindow.cpp > CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.i

CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/src/mainWindow.cpp -o CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.s

CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.o: src/DataStruct/pushButton.cpp
CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.o -MF CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.o.d -o CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.o -c /Users/zhaodejin/Documents/QData/src/DataStruct/pushButton.cpp

CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/src/DataStruct/pushButton.cpp > CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.i

CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/src/DataStruct/pushButton.cpp -o CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.s

CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.o: src/DataStruct/DataTable.cpp
CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.o -MF CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.o.d -o CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.o -c /Users/zhaodejin/Documents/QData/src/DataStruct/DataTable.cpp

CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/src/DataStruct/DataTable.cpp > CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.i

CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/src/DataStruct/DataTable.cpp -o CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.s

CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.o: src/DataStruct/ArrayList.cpp
CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.o -MF CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.o.d -o CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.o -c /Users/zhaodejin/Documents/QData/src/DataStruct/ArrayList.cpp

CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/src/DataStruct/ArrayList.cpp > CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.i

CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/src/DataStruct/ArrayList.cpp -o CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.s

CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.o: src/DataStruct/ArrayWindow.cpp
CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.o -MF CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.o.d -o CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.o -c /Users/zhaodejin/Documents/QData/src/DataStruct/ArrayWindow.cpp

CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/src/DataStruct/ArrayWindow.cpp > CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.i

CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/src/DataStruct/ArrayWindow.cpp -o CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.s

CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.o: src/DataStruct/LinkListWindow.cpp
CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.o -MF CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.o.d -o CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.o -c /Users/zhaodejin/Documents/QData/src/DataStruct/LinkListWindow.cpp

CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/src/DataStruct/LinkListWindow.cpp > CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.i

CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/src/DataStruct/LinkListWindow.cpp -o CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.s

CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.o: src/Networks/TCPWindow.cpp
CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.o -MF CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.o.d -o CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.o -c /Users/zhaodejin/Documents/QData/src/Networks/TCPWindow.cpp

CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/src/Networks/TCPWindow.cpp > CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.i

CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/src/Networks/TCPWindow.cpp -o CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.s

CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.o: CMakeFiles/ComputerForQt.dir/flags.make
CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.o: src/Networks/HTTP.cpp
CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.o: CMakeFiles/ComputerForQt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.o -MF CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.o.d -o CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.o -c /Users/zhaodejin/Documents/QData/src/Networks/HTTP.cpp

CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhaodejin/Documents/QData/src/Networks/HTTP.cpp > CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.i

CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhaodejin/Documents/QData/src/Networks/HTTP.cpp -o CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.s

# Object files for target ComputerForQt
ComputerForQt_OBJECTS = \
"CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.o" \
"CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.o" \
"CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.o" \
"CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.o" \
"CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.o" \
"CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.o" \
"CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.o" \
"CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.o" \
"CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.o"

# External object files for target ComputerForQt
ComputerForQt_EXTERNAL_OBJECTS =

ComputerForQt: CMakeFiles/ComputerForQt.dir/ComputerForQt_autogen/mocs_compilation.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/src/DataStruct/main.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/src/mainWindow.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/src/DataStruct/pushButton.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/src/DataStruct/DataTable.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayList.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/src/DataStruct/ArrayWindow.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/src/DataStruct/LinkListWindow.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/src/Networks/TCPWindow.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/src/Networks/HTTP.cpp.o
ComputerForQt: CMakeFiles/ComputerForQt.dir/build.make
ComputerForQt: /Users/zhaodejin/opt/anaconda3/lib/libQt5Widgets.5.9.7.dylib
ComputerForQt: /Users/zhaodejin/opt/anaconda3/lib/libQt5Network.5.9.7.dylib
ComputerForQt: /Users/zhaodejin/opt/anaconda3/lib/libQt5Gui.5.9.7.dylib
ComputerForQt: /Users/zhaodejin/opt/anaconda3/lib/libQt5Core.5.9.7.dylib
ComputerForQt: CMakeFiles/ComputerForQt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhaodejin/Documents/QData/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ComputerForQt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ComputerForQt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ComputerForQt.dir/build: ComputerForQt
.PHONY : CMakeFiles/ComputerForQt.dir/build

CMakeFiles/ComputerForQt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ComputerForQt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ComputerForQt.dir/clean

CMakeFiles/ComputerForQt.dir/depend:
	cd /Users/zhaodejin/Documents/QData && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhaodejin/Documents/QData /Users/zhaodejin/Documents/QData /Users/zhaodejin/Documents/QData /Users/zhaodejin/Documents/QData /Users/zhaodejin/Documents/QData/CMakeFiles/ComputerForQt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ComputerForQt.dir/depend

