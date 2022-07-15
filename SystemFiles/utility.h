// Typically, header files have an include guard or a pragma once directive to ensure that
// they are not inserted multiple times into a single .cpp file
#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>
#include <stdlib.h>
#include <fstream>

#define USER_INPUT_INVALID_COMMAND "--> ERROR: Invalid command\n"
#define HELP_COMMAND_FILE_NAME "help.md"

using namespace std;

void initial_menu_display_banner();
void user_interface_menu_display();
void user_enter_help_command();
void user_enter_clear_command();

#endif
