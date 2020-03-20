#include "File.h"

string File::exchangeCommands(string oldLine)
{
	return string();
}

File::File(string path) {
	modified = false;
	// remove "
	path.erase(
		remove(path.begin(), path.end(), '\"'),
		path.end()
	);
	size_t startName = path.find_last_of("\\") + 1;
	string fullName = path.substr(startName);
	size_t startExtension = fullName.find_last_of(".");
	extension = fullName.substr(startExtension + 1);
	name = fullName.substr(0, startExtension);
	File::path = path;
}

string File::getExtension() {
	return extension;
}

string File::getName() {
	return name;
}

string File::getPath() {
	return path;
}

bool File::getModified() {
	return modified;
}

bool File::transformToCpp() {
	//creates .cpp
	string cppName = ".\\TransformedFiles\\" + name + ".cpp";
	ofstream cppFile(cppName);
	ifstream infile(path);
	string line;
	while (getline(infile, line)) {
		istringstream iss(line);		// reads .ino file
		string newLine = exchangeCommands(line);
		cppFile << line << endl;		// writes .cpp file
	}
	// close both streams
	infile.close();
	cppFile.close();
	return true;
}

bool File::compile() {
	//TODO
	return true;
}

// changes the arduino commands to the simulation commands
string exchangeCommands(string oldLine) {
	// TODO
	return oldLine;
}