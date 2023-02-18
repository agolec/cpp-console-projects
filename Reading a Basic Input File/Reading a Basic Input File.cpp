// Reading a Basic Input File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFile;
	int numberFromFile;
	int numbers[10] = {0,0,0,0,0,0,0,0,0,0};

	inputFile.open("E:\\IT projects\\cplus-plus\\cpp-console-projects\\Writing a Basic Output File\\CountToTen.txt");
	cout << "We will get input by reading the file. . ." << endl;
	int count = 0;
	if (inputFile) {
		while (inputFile >> numberFromFile) {
			numbers[count] = numberFromFile;
			count++;
		}
		cout << "closing input file." << endl;
		inputFile.close();
	}
	else {
		cout << "Error opening input file.\n";
	}
	

	count = 0;
	while (count < 10) {
		cout << numbers[count] << endl;
		count++;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
