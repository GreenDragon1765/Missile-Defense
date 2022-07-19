# Weapons Header File (weapons.h)
This is the header file containing the class information for the Turret and later for the Missile. Each instance of a turret will be pulled from this header file.
This class uses encapsulation to stop the user from changing turret information to make sure it is consistent. It contains a lot of information about the turret to
make sure that they can run properly.

Additions so far have revolved around initializing a Turret instance of the class. Going forwards, it is imperative that the turret information be stored somewhere. Something later on that DDS could implement is a message sent to all Turrets that they acknowledge the new Turret that has been registered. Each of them will update their ledger, like a blockchain in cryptocurrency. For now, the user input during the installation stage is fine, but it will need to be more elegant and less bare-bones. 

Going forwards, information for turret needs to be saved to a file somewhere.
