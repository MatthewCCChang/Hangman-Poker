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
CMAKE_COMMAND = "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\MatthewChang\Desktop\Work\Project\poker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\MatthewChang\Desktop\Work\Project\poker\build

# Include any dependencies generated for this target.
include CMakeFiles/a.out.src.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/a.out.src.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/a.out.src.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a.out.src.dir/flags.make

CMakeFiles/a.out.src.dir/src/card.cpp.obj: CMakeFiles/a.out.src.dir/flags.make
CMakeFiles/a.out.src.dir/src/card.cpp.obj: CMakeFiles/a.out.src.dir/includes_CXX.rsp
CMakeFiles/a.out.src.dir/src/card.cpp.obj: ../src/card.cpp
CMakeFiles/a.out.src.dir/src/card.cpp.obj: CMakeFiles/a.out.src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MatthewChang\Desktop\Work\Project\poker\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a.out.src.dir/src/card.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.out.src.dir/src/card.cpp.obj -MF CMakeFiles\a.out.src.dir\src\card.cpp.obj.d -o CMakeFiles\a.out.src.dir\src\card.cpp.obj -c C:\Users\MatthewChang\Desktop\Work\Project\poker\src\card.cpp

CMakeFiles/a.out.src.dir/src/card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.src.dir/src/card.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\MatthewChang\Desktop\Work\Project\poker\src\card.cpp > CMakeFiles\a.out.src.dir\src\card.cpp.i

CMakeFiles/a.out.src.dir/src/card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.src.dir/src/card.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\MatthewChang\Desktop\Work\Project\poker\src\card.cpp -o CMakeFiles\a.out.src.dir\src\card.cpp.s

CMakeFiles/a.out.src.dir/src/deck.cpp.obj: CMakeFiles/a.out.src.dir/flags.make
CMakeFiles/a.out.src.dir/src/deck.cpp.obj: CMakeFiles/a.out.src.dir/includes_CXX.rsp
CMakeFiles/a.out.src.dir/src/deck.cpp.obj: ../src/deck.cpp
CMakeFiles/a.out.src.dir/src/deck.cpp.obj: CMakeFiles/a.out.src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MatthewChang\Desktop\Work\Project\poker\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/a.out.src.dir/src/deck.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.out.src.dir/src/deck.cpp.obj -MF CMakeFiles\a.out.src.dir\src\deck.cpp.obj.d -o CMakeFiles\a.out.src.dir\src\deck.cpp.obj -c C:\Users\MatthewChang\Desktop\Work\Project\poker\src\deck.cpp

CMakeFiles/a.out.src.dir/src/deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.src.dir/src/deck.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\MatthewChang\Desktop\Work\Project\poker\src\deck.cpp > CMakeFiles\a.out.src.dir\src\deck.cpp.i

CMakeFiles/a.out.src.dir/src/deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.src.dir/src/deck.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\MatthewChang\Desktop\Work\Project\poker\src\deck.cpp -o CMakeFiles\a.out.src.dir\src\deck.cpp.s

CMakeFiles/a.out.src.dir/src/game.cpp.obj: CMakeFiles/a.out.src.dir/flags.make
CMakeFiles/a.out.src.dir/src/game.cpp.obj: CMakeFiles/a.out.src.dir/includes_CXX.rsp
CMakeFiles/a.out.src.dir/src/game.cpp.obj: ../src/game.cpp
CMakeFiles/a.out.src.dir/src/game.cpp.obj: CMakeFiles/a.out.src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MatthewChang\Desktop\Work\Project\poker\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/a.out.src.dir/src/game.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.out.src.dir/src/game.cpp.obj -MF CMakeFiles\a.out.src.dir\src\game.cpp.obj.d -o CMakeFiles\a.out.src.dir\src\game.cpp.obj -c C:\Users\MatthewChang\Desktop\Work\Project\poker\src\game.cpp

CMakeFiles/a.out.src.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.src.dir/src/game.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\MatthewChang\Desktop\Work\Project\poker\src\game.cpp > CMakeFiles\a.out.src.dir\src\game.cpp.i

CMakeFiles/a.out.src.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.src.dir/src/game.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\MatthewChang\Desktop\Work\Project\poker\src\game.cpp -o CMakeFiles\a.out.src.dir\src\game.cpp.s

CMakeFiles/a.out.src.dir/src/gameboard.cpp.obj: CMakeFiles/a.out.src.dir/flags.make
CMakeFiles/a.out.src.dir/src/gameboard.cpp.obj: CMakeFiles/a.out.src.dir/includes_CXX.rsp
CMakeFiles/a.out.src.dir/src/gameboard.cpp.obj: ../src/gameboard.cpp
CMakeFiles/a.out.src.dir/src/gameboard.cpp.obj: CMakeFiles/a.out.src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MatthewChang\Desktop\Work\Project\poker\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/a.out.src.dir/src/gameboard.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.out.src.dir/src/gameboard.cpp.obj -MF CMakeFiles\a.out.src.dir\src\gameboard.cpp.obj.d -o CMakeFiles\a.out.src.dir\src\gameboard.cpp.obj -c C:\Users\MatthewChang\Desktop\Work\Project\poker\src\gameboard.cpp

CMakeFiles/a.out.src.dir/src/gameboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.src.dir/src/gameboard.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\MatthewChang\Desktop\Work\Project\poker\src\gameboard.cpp > CMakeFiles\a.out.src.dir\src\gameboard.cpp.i

CMakeFiles/a.out.src.dir/src/gameboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.src.dir/src/gameboard.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\MatthewChang\Desktop\Work\Project\poker\src\gameboard.cpp -o CMakeFiles\a.out.src.dir\src\gameboard.cpp.s

CMakeFiles/a.out.src.dir/src/hangman.cpp.obj: CMakeFiles/a.out.src.dir/flags.make
CMakeFiles/a.out.src.dir/src/hangman.cpp.obj: CMakeFiles/a.out.src.dir/includes_CXX.rsp
CMakeFiles/a.out.src.dir/src/hangman.cpp.obj: ../src/hangman.cpp
CMakeFiles/a.out.src.dir/src/hangman.cpp.obj: CMakeFiles/a.out.src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MatthewChang\Desktop\Work\Project\poker\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/a.out.src.dir/src/hangman.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.out.src.dir/src/hangman.cpp.obj -MF CMakeFiles\a.out.src.dir\src\hangman.cpp.obj.d -o CMakeFiles\a.out.src.dir\src\hangman.cpp.obj -c C:\Users\MatthewChang\Desktop\Work\Project\poker\src\hangman.cpp

CMakeFiles/a.out.src.dir/src/hangman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.src.dir/src/hangman.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\MatthewChang\Desktop\Work\Project\poker\src\hangman.cpp > CMakeFiles\a.out.src.dir\src\hangman.cpp.i

CMakeFiles/a.out.src.dir/src/hangman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.src.dir/src/hangman.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\MatthewChang\Desktop\Work\Project\poker\src\hangman.cpp -o CMakeFiles\a.out.src.dir\src\hangman.cpp.s

CMakeFiles/a.out.src.dir/src/main.cpp.obj: CMakeFiles/a.out.src.dir/flags.make
CMakeFiles/a.out.src.dir/src/main.cpp.obj: CMakeFiles/a.out.src.dir/includes_CXX.rsp
CMakeFiles/a.out.src.dir/src/main.cpp.obj: ../src/main.cpp
CMakeFiles/a.out.src.dir/src/main.cpp.obj: CMakeFiles/a.out.src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MatthewChang\Desktop\Work\Project\poker\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/a.out.src.dir/src/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.out.src.dir/src/main.cpp.obj -MF CMakeFiles\a.out.src.dir\src\main.cpp.obj.d -o CMakeFiles\a.out.src.dir\src\main.cpp.obj -c C:\Users\MatthewChang\Desktop\Work\Project\poker\src\main.cpp

CMakeFiles/a.out.src.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.src.dir/src/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\MatthewChang\Desktop\Work\Project\poker\src\main.cpp > CMakeFiles\a.out.src.dir\src\main.cpp.i

CMakeFiles/a.out.src.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.src.dir/src/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\MatthewChang\Desktop\Work\Project\poker\src\main.cpp -o CMakeFiles\a.out.src.dir\src\main.cpp.s

CMakeFiles/a.out.src.dir/src/player.cpp.obj: CMakeFiles/a.out.src.dir/flags.make
CMakeFiles/a.out.src.dir/src/player.cpp.obj: CMakeFiles/a.out.src.dir/includes_CXX.rsp
CMakeFiles/a.out.src.dir/src/player.cpp.obj: ../src/player.cpp
CMakeFiles/a.out.src.dir/src/player.cpp.obj: CMakeFiles/a.out.src.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MatthewChang\Desktop\Work\Project\poker\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/a.out.src.dir/src/player.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.out.src.dir/src/player.cpp.obj -MF CMakeFiles\a.out.src.dir\src\player.cpp.obj.d -o CMakeFiles\a.out.src.dir\src\player.cpp.obj -c C:\Users\MatthewChang\Desktop\Work\Project\poker\src\player.cpp

CMakeFiles/a.out.src.dir/src/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.src.dir/src/player.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\MatthewChang\Desktop\Work\Project\poker\src\player.cpp > CMakeFiles\a.out.src.dir\src\player.cpp.i

CMakeFiles/a.out.src.dir/src/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.src.dir/src/player.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\MatthewChang\Desktop\Work\Project\poker\src\player.cpp -o CMakeFiles\a.out.src.dir\src\player.cpp.s

# Object files for target a.out.src
a_out_src_OBJECTS = \
"CMakeFiles/a.out.src.dir/src/card.cpp.obj" \
"CMakeFiles/a.out.src.dir/src/deck.cpp.obj" \
"CMakeFiles/a.out.src.dir/src/game.cpp.obj" \
"CMakeFiles/a.out.src.dir/src/gameboard.cpp.obj" \
"CMakeFiles/a.out.src.dir/src/hangman.cpp.obj" \
"CMakeFiles/a.out.src.dir/src/main.cpp.obj" \
"CMakeFiles/a.out.src.dir/src/player.cpp.obj"

# External object files for target a.out.src
a_out_src_EXTERNAL_OBJECTS =

bin/a.out.src.exe: CMakeFiles/a.out.src.dir/src/card.cpp.obj
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/src/deck.cpp.obj
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/src/game.cpp.obj
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/src/gameboard.cpp.obj
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/src/hangman.cpp.obj
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/src/main.cpp.obj
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/src/player.cpp.obj
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/build.make
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/linklibs.rsp
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/objects1.rsp
bin/a.out.src.exe: CMakeFiles/a.out.src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\MatthewChang\Desktop\Work\Project\poker\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable bin\a.out.src.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\a.out.src.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a.out.src.dir/build: bin/a.out.src.exe
.PHONY : CMakeFiles/a.out.src.dir/build

CMakeFiles/a.out.src.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\a.out.src.dir\cmake_clean.cmake
.PHONY : CMakeFiles/a.out.src.dir/clean

CMakeFiles/a.out.src.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\MatthewChang\Desktop\Work\Project\poker C:\Users\MatthewChang\Desktop\Work\Project\poker C:\Users\MatthewChang\Desktop\Work\Project\poker\build C:\Users\MatthewChang\Desktop\Work\Project\poker\build C:\Users\MatthewChang\Desktop\Work\Project\poker\build\CMakeFiles\a.out.src.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a.out.src.dir/depend
