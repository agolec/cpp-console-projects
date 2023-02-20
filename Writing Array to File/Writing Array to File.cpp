// Writing Array to File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int count;
    ofstream outputFile;

    for (count = 0; count < ARRAY_SIZE; count++) {
        numbers[count] = (count + 1) * (count + 1);
    }

    //Open file for output.
    outputFile.open("SavedNumbers.txt");

    //Inform user you will write the contents to the file, and then write contents to the file.
    cout << "I will store 10 numbers in this array.";
    for (count = 0; count < ARRAY_SIZE; count++) {
        outputFile << numbers[count] << endl;
    }
    //Closing outputFile.
    outputFile.close();

    cout << "File is closed.";

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
