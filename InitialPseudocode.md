# Initial Pseudocode for the System
### Main program:
The main program is where the entire system will be called from. The main function will execute the menu for the user to access information about the Guided Missile System, get a list of all online Turrets, and connect to a specific turret.
Once they connect to a specific turret, they will access that specific turret, rather than the network as a whole. From here they will be able to perform tasks on that Turret. At this point, the turret itself, once a user connects to it,
assuming its online, will have its own menu that the user will interact with once they access the turret.

### Weapons Header File:
This header file will contain the code framework for the classes that will represent various parts of the system, such as the turret class itself, which will contain all the information relevant to that instance of the turret. Each turret
will have a vector associated with their missile_bay, which is the section the missiles are housed in. Each missile within the missile bay will have their own instance as well, which will also be included in this header file.

### Turret File:
This file will contain all non-method functions relevant to the functionality of the turret, primarily the menu functions the user will interact with once they connect to the turret, again assuming the turret is online.

### Missile File:
This file, similar to the Turret file, will contain all non-method functions relevant to the functionality of the turret, though no menu will be associated with an individual missile housed within a turret.

### Command File:
This file will contain the commands that the turret will execute when the user wants to perform tasks with the turret, such as fire missiles, reload the missile bay, or take the Turret offline. This is also the file where functions
will be included that will log activity associated with the turret. Whenever an activity occurs, or information regarding the turret is updated, it will be logged in a log file.

### Network File:
THis file will contain the functionality that will make this system Peer-to-Peer, simulating the OpenDDS framework. C++ does not have socket programming capabilities so it is likely that these jobs will need to be outsourced to
another programming language, likely Python or C. This will be how a user will connect to a specific Turret that is online.
