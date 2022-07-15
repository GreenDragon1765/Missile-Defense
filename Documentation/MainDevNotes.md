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

Created a function in menu.cpp called "user_interface_menu_display()" which displays to the screen the prompt for the command line, similar to a shell. It accepts input from the user in the form of strings. It operates as a command line, and will have built-in commands that the user will interact with. For now, the commands will be single-word without any flags or additional options, and this will be added to with the inclusion of string tokens later.
  1. One command is used for now, 'help'
  2. If the user types 'help' into the prompt, then the help command will be executed
  3. If the user types anything else, an error will print, and the prompt will come back again, and this will continue until the user types help or the program crashs, or they exit the program.
  4. Another function was written for when the user types the help command. It reads from a file the help command contents. This will contain all of the commands that are available in the main menu. It will continue to be added on to as subsequent commands are added to the program.
  5. The next command to be added will be the 'quit' command, which will exit the main menu, which will exit the program itself. So long as the user does not type 'quit' the program will continue to run, and the prompt will continue to ask for commands.
  6. Quit command added, exits the program via break statement that takes user out of the do while loop.
  7. Break statement removed from the help command. User can type help as many times as they like and the program will not exit
  8. Input has been dealt with, user can enter anything they like and it will not break
  9. Update the help file to include the new commands, and make sure the formatting makes sense and the instructions are clear and concise.

Final thoughts before the weekend. When the user types just the enter key, it doesn't show the prompt, so that needs to be fixed. Implement the commands from the help file and begin development on the Turret class on monday.
