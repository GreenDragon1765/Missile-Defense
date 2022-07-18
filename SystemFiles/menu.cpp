#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "weapons.h"
#include "utility.h"

using namespace std;

void initial_menu_display_banner() {
	cout << "             WELCOME TO THE GREEN DRAGON MISSILE DEFENSE SYSTEM\n";
	cout << "---------------------------------------------------------------------------------\n";
}

void user_interface_menu_display() {
	string user_input;
	initial_menu_display_banner();
	cout << "Type commands for access, type 'help' for help\n";
	do {
		cout << "green-dragon-defense-cli$> ";
		cin >> user_input;
		if (user_input == "help") {
			user_enter_help_command();
		} else if (user_input == "quit") {
			break;
		} else if (user_input == "clear") {
			user_enter_clear_command();
		} else if (user_input[0] == '\n') {
			cout << "enter key pressed\n";
			continue;
		} else if (user_input == "list") {
			cout << "List all turrets, offline or online\n";
		} else if (user_input == "add") {
			user_enter_add_command();
		} else if (user_input == "connect") {
			cout << "Connect to a turret\n";
		} else {
			cerr << USER_INPUT_INVALID_COMMAND;
		}
	} while(true);
	cout << "Exiting Green Dragon Defense...\n";
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

void user_enter_add_command() {
	Turret temp;
	temp.display_turret_info_to_screen();
}
