#include <string>
#include <algorithm>

using namespace std;

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