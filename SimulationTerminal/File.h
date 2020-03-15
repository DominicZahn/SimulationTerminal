#include <string>
#include <algorithm>
#include <sstream>
#include <fstream>

using namespace std;

//test
#include <iostream>

//test path
/*
"E:\Dokumente\Arduino\testConvert\testConvert.ino"
*/

class File
{

private:
    string extension;
    string name;
    string path;
    bool modified;

public:
    File(string path);

    string getExtension();
    string getName();
    string getPath();
    bool getModified();
    // transforms a .ino to .cpp
    // also replaces the arduino commands with the simulation commands
    bool transformToCpp();
    // compiles the file to an .exe if it is an modified .cpp
    bool compile();
};