# Overview Document
This will be an overview document of missile defense systems in the real world, and will be researched to make the simulator project as realistic as possible.
This overview document will cover different types of missiles utilized by the US Navy, as well as, where and how they are housed.
Characteristics about each missile will be created as well, and this is likely where C++'s utilization of Object-Oriented-Programming will come into play.

Firstly, what is a missile? A missile is an object which is focibly propelled at a target, either by hand or from a mechanical device. A missile is a weapon
that is self-propelled or directed by remote-control, carrying conventional or nuclear explosives. What are some charactistics of a missile that would be
commissioned by the US Navy that could be included in the project itself?

Missile types
  1. Air-to-air missiles
  2. Air-to-surface missiles
  3. Surface-to-air
  4. Surface-to-surface
  5. Antisubmarine
  6. ICBM
  7. Submarine-launched

![image](https://user-images.githubusercontent.com/109233066/179263378-53a403d3-1d15-412a-9ac1-5941773c7b8e.png)

The United States Navy utilizes Guided Missile Launching Systems (GMLS) for launching guided missiles.
Guide Missile Launching System Designations
  1. Mk 1
  2. Mk 4
  3. Mk 5
  4. Mk 7
  5. Mk 8
  6. Mk 9
  7. Mk 29

A guided missile system will keep track of a number of things. In essense, following the picture included above, a turret is physically where the missiles are housed
before they are launched at a target. What are some things that a system would keep track of related to a turret?
  1. What kind of turret is it? The ***TURRET_TYPE*** will determine what kinds of missiles will be housed within it.
  2. How many missiles can it hold? This is the ***TURRET_MISSILE_BAY_CAPACITY*** and depending on ***TURRET_TYPE*** this value will be different
  3. What ship is it on? This will be a variable of ***TURRET_SHIP*** ship the turret has been deployed on
  4. How many missiles are in it right now? This will be a series of variables that will keep track of how many missiles are currently loaded into the turret. An array of Missile objects ***Missile turret_missile_bay[TURRET_CAPACITY]*** will be present with each turret instance in the software.
  5. Is it full or empty? Depending on the ***TURRET_MISSILE_BAY_CAPACITY*** this value will be calculated by keeping track of how many missiles are currently in the missile bay of the turret. If that number is 0, then the turret is empty.
  6. What is the turret's location in coordinates? This will be a vector of two values ***TURRET_LOCATION_COORDINATES[2]*** and will contain the (latitude, longitude)
  7. Any current active targets? This will keep track of whether or not there are any active targets, meaning the turret is targetting any enemies or not. A target will also have a coordinate vector associated with it.
  8. What is the turret's code name in the network? This will be the ***TURRET_CODE_NAME*** which is the code name on the network of the turret itself
  9. How is the turret's software interface accessed? A menu will be developed for users to access the information of the turret, add missiles to the missile bay by loading the turret, scan for targets, or manually enter targets

In software, C++ would implement this information using a class "Turret." The class will have a number of native methods for accessing information within it.
It will be imperative that encapsulation is used, as users should not have access to the variables themselves, as they would be able to update and change the
values which would be a disater. Instead, they will be kept private, and set/get methods will be written that will be publicly available to the user who is
accessing the interface itself.
