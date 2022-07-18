# Missile-Defense
The purpose of this project is the development of a missile defense simulation system in attempt to hone C++ skillset. This project will be written primarily in C++, with a possible inclusion of Python scripts. This is being written in C++ because of it's compatibility with the OpenDDS decentralized Peer-to-Peer framework. This README.md file is mean't to introduce the reader to the purpose and scope of the project. Additional documentation will be included throughout the development process as a means of organizing the project. A large amount of research and documentation will be conducted prior to initial coding.
![image](https://user-images.githubusercontent.com/109233066/179260669-30277af8-bf76-44dd-abba-79b94267d5d4.png)

## Housekeeping information
This is where the project's access tokens will be kept. They expire every 7 days, so remember to generate a new one every week. Make sure to keep up to date with the token if accessing through a command line. Keep all tokens here, even after
they expire for documentation purposes.

***Github access token:***

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

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

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

### Common Github Commands
  1. git pull origin main
  2. git add <filename>
  3. git commit -m "commit message"
  4. git push origin main
  5. git branch
  6. git branch checkout

## Development Process Documentation
  1. Clone the Git repository to the SSH that development will occur on.
  2. Create the main program file, include argument & header files <iostream> <stdlib> <string> and <limits>
  3. Create a functioning Makefile, use ***g++ -std=c++11 -o <output_file> <input_file> -I.***
  4. Begin development of the user interface, as a command line, and include a few generic options. Test it extensively
