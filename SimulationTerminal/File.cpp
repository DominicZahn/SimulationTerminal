#include "File.h"
#include <string>

using namespace std;

class File {
private:
	string extension;
	string name;
	string path;
	bool modified = false;

public:
	File(string path) {

	}

	string getExtension() {
		return extension;
	}

	string getName() {
		return name;
	}

	string getPath() {
		return path;
	}

	bool transformToCpp() {
		return true;
	}

	bool compile() {
		return true;
	}
};
