#include "File.h"

File::File(string path) {
	modified = false;

	size_t startExtension = path.find_last_of(".");
	size_t startName = path.find_last_of("/");
	extension = path.substr(startExtension + 1);
	name = path.substr(startName + 1, startExtension);

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