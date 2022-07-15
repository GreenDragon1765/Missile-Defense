#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "utility.h"

using namespace std;

void initial_menu_display_banner() {
	cout << "             WELCOME TO THE GREEN DRAGON MISSILE DEFENSE SYSTEM\n";
	cout << "---------------------------------------------------------------------------------\n";
}

/*
This is where the user will input what they want to do to navigate the main menu of the defense system
They will do this through the execution of commands, so their input will have to be in the form of a string
The help menu will be the first thing to be developed, and will read from a help.text file to display the
relevant commands to the screen for the user to interact with.
*/
void user_interface_menu_display() {
	string user_input;
	cout << "Type commands for access, type 'help' for help\n";
	do {
		cout << "green-dragon-1765-defense-cli$> ";
		cin >> user_input;
		if (user_input == "help") {
			user_enter_help_command();
		} else if (user_input == "quit") {
			cout << "user has quit\n";
			break;
		} else if (user_input == "clear") {
			user_enter_clear_command();
		} else if (user_input[0] == '\n') {
			cout << "enter key pressed\n";
			continue;
		} else {
			cerr << USER_INPUT_INVALID_COMMAND;
		}
	} while(true);
}

void user_enter_help_command() {
	string help_file_contents;
	ifstream MyReadFile(HELP_COMMAND_FILE_NAME);
	while (getline (MyReadFile, help_file_contents))
		cout << help_file_contents << "\n";
	cout << "\n";
	MyReadFile.close();
}

void user_enter_clear_command() {
	cout << "\033[2J\033[1;1H";
}
