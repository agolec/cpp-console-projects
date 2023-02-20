// Reading From a File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Need fstream in order to use methods that deal with file i/o.
#include <fstream>

using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int count = 0;
    ifstream inputFile;
    
    //Open the inputfile.
    inputFile.open("TenNumbers.txt");

    //Read each element from the file and enter it into an array.
    //      inputFile >> numbers[count] inputs the current line of inputFile into numbers[count].
    while (count < ARRAY_SIZE && inputFile >> numbers[count]) {
        count++;
    }

    //Display the numbers read.
    cout << "The numbers are: ";
    for (count = 0; count < ARRAY_SIZE; count++) {
        cout << numbers[count] << " ";
    }
    cout << "\n";
    return 0;
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
