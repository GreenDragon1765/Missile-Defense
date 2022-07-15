# Initial Pseudocode for the System
### Main program:
The main program is where the entire system will be called from. The main function will execute the menu for the user to access information about the Guided Missile System, get a list of all online Turrets, and connect to a specific turret.
Once they connect to a specific turret, they will access that specific turret, rather than the network as a whole. From here they will be able to perform tasks on that Turret. At this point, the turret itself, once a user connects to it,
assuming its online, will have its own menu that the user will interact with once they access the turret.

  1. int main(int argc, char *argv[]);  // Main function that will execute all other functions
  2. void user_interface_menu();  // This will be the main user interface, where the user will observe all Turrets that are currently online or not.
  3. Menu will operate and look like a ssh shell program. It will be a command line functionality.

### Weapons Header File:
This header file will contain the code framework for the classes that will represent various parts of the system, such as the turret class itself, which will contain all the information relevant to that instance of the turret. Each turret
will have a vector associated with their missile_bay, which is the section the missiles are housed in. Each missile within the missile bay will have their own instance as well, which will also be included in this header file.

Turret class: the turret class will utilize encapsulation, keeping a majority of its stored values hidden from the user, and will only be accessible via get/set methods.
  1. TURRET_TYPE  // String
  2. TURRET_MISSILE_BAY_CAPACITY  // Int
  3. TURRET_SHIP  // String
  4. Missile turret_missile_bay[];  // Object array, missiles
  5. TURRET_CODE_NAME // String
  6. TURRET_ID_NUMBER // Int
  7. TURRET_ONLINE  // Boolean
  8. TURRET_COORDINATES[] // Double Vector
  9. TURRET_INIT_DATE // Date turret was initialized
  10. TURRET_HAS_TARGET // Boolean
  11. TURRET_TARGET_COORDINATES // Double Vector
  12. Turret Constructor () // Will initialize all the values listed above, which will be private, the constructor will be public so the user can access it.
  13. Display Turret Info() will display all information about the turret for the user to view
  14. view_turret_missile_bay() will display to the user all information about each bay in the missile bay, if it is loaded or not, what missile is in each bay, and if any valid targets are present with each missile.

Missile class: the missile class will utlize encapsulation, keeping a majority of its stored values hidden from the user, and will only be accessible via get/set methods.
  1. MISSILE_TYPE
  2. MISSILE_ID_NUMBER
  3. MISSILE_CODE_NAME
  4. MISSILE_ONLINE
  5. MISSILE_CURRENT_TARGET_COORDINATES
  6. Missile Constructor() // Will initialize all the values listed above to preset values, which will be private, the constructor will be public so the user and the menu can access and iteract with it.

Preprocessor directives: the preset values of the system to be used for testing purposes, and perhaps a few will remain when deployment of the software occurs.

Function prototypes: The turret file and the missile file will be accessed by main through the weapons header file, so their function prototypes will be housed here.

### Turret File:
This file will contain all non-method functions relevant to the functionality of the turret, primarily the menu functions the user will interact with once they connect to the turret, again assuming the turret is online.
  1. Turret Menu: the turret's main menu when the user connects to the online turret. This is what the user will be interacting with, such as viewing turret information, accessing the turret missile bay vector, reloading the turret with missiles, and finally scanning for, or manually adding targets to be destroyed.

### Missile File:
This file, similar to the Turret file, will contain all non-method functions relevant to the functionality of the turret, though no menu will be associated with an individual missile housed within a turret.
  1. Missile Functions: these are functions that will serve to make the missile class dynamic, and will contain functions that will be called by the Turret file for loading the Missiles into the turret missile bay.
  2. Targetting, though the Turret will decide the targets, the coordinates for said target still ultimately have to go to the missile, which will calculate the distance between itself and the target, flight duration, speed, and other vital information.

### Command File:
This file will contain the commands that the turret will execute when the user wants to perform tasks with the turret, such as fire missiles, reload the missile bay, or take the Turret offline. This is also the file where functions
will be included that will log activity associated with the turret. Whenever an activity occurs, or information regarding the turret is updated, it will be logged in a log file.
  1. These are the commands that the turret will run for the duration of the interface
  2. Commands to launch missiles from the bay will be made from these functions
  3. Taking the turret offline, changing coordinates, refactoring the Turret type to accomodate different missile types, etc.
  4. Logging activity of the Turret, when targets are scanned for, or when target coordinates are manually entered. When a new missile is added to the turret missile bay, all activity will be written to a log file.

### Network File:
THis file will contain the functionality that will make this system Peer-to-Peer, simulating the OpenDDS framework. C++ does not have socket programming capabilities so it is likely that these jobs will need to be outsourced to
another programming language, likely Python or C. This will be how a user will connect to a specific Turret that is online.
  1. For now, this will remain blank, as a development plan for this functionality has not been decided upon as of yet.
