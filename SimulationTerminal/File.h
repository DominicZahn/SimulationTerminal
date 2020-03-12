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
};

