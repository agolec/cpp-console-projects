// Writing a Basic Output File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Reading a Basic File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>
#include <fstream>


int main()
{
    //Declare an output file stream object 'outputFile' and then open it.
    ofstream outputFile;
    cout << system("cd");
    outputFile.open("CountToTen.txt");

    int count = 1;

    cout << "Writing to file. . ." << endl;

    //Write the numbers 1-10 to this file.
    do {
        outputFile << (count) << "\n";
        count++;
    } while (count <= 10);

    cout << "Done writing to file. Closing. . ." << endl;
    //Close the file.
    outputFile.close();
    cout << "Closed the file." << endl;
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
