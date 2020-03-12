#pragma once
class File
{
public:
	File(string path);

	string getExtension();
	string getName();
	string getPath();
	// transforms a .ino to .cpp
	// also replaces the arduino commands with the simulation commands
	bool transformToCpp();
	// compiles the file to an .exe if it is an modified .cpp
	bool compile();
};

