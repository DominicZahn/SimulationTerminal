#include <Windows.h>
#include <string>
#include <iostream>

#include "File.h"

using namespace std;

int main()
{
	string testFilePath = "E:/Dokumente/Arduino/testConvert/testConvert.ino";
	File testFile(testFilePath);

	cout << testFile.getName() << "\n";
	cout << testFile.getExtension() << "\n";
	cout << testFile.getModified() << "\n";
}