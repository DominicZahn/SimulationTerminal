#include "File.h"

//until we got real test classes
string enableTest(string input) {
	if (input == "test")
		return ".\\Ressources\\testRessources\\testConvert\\testConvert.ino";
	return input;
}

int main()
{
	cout << "Input the path of the .ino file" << endl;
	string input;
	cin >> input;

	input = enableTest(input);

	File testFile(input);

	cout << "name: " << testFile.getName() << "\n";
	cout << "extension: " << testFile.getExtension() << "\n";
	cout << "modified: " << testFile.getModified() << "\n";

	cout << "Reading .ino file..." << "\n";

	testFile.transformToCpp();
}