#include <string>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

class File
{

private:
    string extension;
    string name;
    string path;
    bool modified;

    string exchangeCommands(string oldLine);

public:
    File(string path);

    string getExtension();
    string getName();
    string getPath();
    bool getModified();
    // creates a .cpp from the .ino
    // also replaces the arduino commands with the simulation commands
    // !!! requires at the moment a directory called Transformed files were it can put the .cpp !!!
    bool transformToCpp();
    // compiles the file to an .exe if it is an modified .cpp
    bool compile();
};