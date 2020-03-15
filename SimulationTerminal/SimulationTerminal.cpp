#include <Windows.h>
#include <string>
#include <iostream>

#include "File.h"

using namespace std;

int main()
{
	cout << "Input the path of the .ino file" << endl;
	string input;
	cin >> input;

	File testFile(input);

	cout << "name: " << testFile.getName() << "\n";
	cout << "extension: " << testFile.getExtension() << "\n";
	cout << "modified: " << testFile.getModified() << "\n";
}