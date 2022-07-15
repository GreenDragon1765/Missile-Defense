# Main Program Development notes
### 2022 July 15 (Friday)
The main program has been created. For now it just prints hello world to the screen. A Makefile has been added that compiles the file to an executable called 'defense.'
An issue arising now is how to include 'clean' in the Makefile to clean the executables for testing purposes. At the bottom of the Makefile, there is a section for the
clean keyword, however it is not cleaning the defense executable to be recompiled.
  1. ***Fixed,*** the issue was the naming of the clean section.
  2. Makefile works like a bash script, executes commands in the terminal
  3. make {makefile_section}
  
The next step is to begin development of the menu that main will display to the user. For now, include a few generic options for the user to interact with.
Make sure to test out the user input, to prevent the wrong type from being input, and to deal with invalid entries from the user. Create a help section to
be accessed by the user, perhaps loaded from a help file. Document development techniques used, and explain testing methods.
  1. Created a separate file, 'menu.cpp' that will contain the functions for the main menu to be called by the main file. They are binded together by the 'utility.h' header file.
  2. A single function has been written initial_menu_display_banner() which welcomes the user to the software. This will only be displayed at system's initial launch
  3. The Makefile was updated to compile menu.cpp with main.cpp to produce the defense executable file
  4. Additionally, notes were added to the header file, describing what an 'include guard' is
  5. This function runs and works well, it displayed to the screen when make command was made
