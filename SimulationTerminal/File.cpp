#include "File.h"

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
	//TODO
	return true;
}

bool File::compile() {
	//TODO
	return true;
}

// changes the arduino commands to the simulation commands
void exchangeCommands() {
	//TODO
}

void changeToTxt() {
	//TODO
}