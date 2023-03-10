// Modifying Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    //Get the values from the array.
    for (auto& val : numbers) {
        cout << "Enter an integer value: ";
        cin >> val;
    }

    //Display the numbers in the array
    for (int count = 0; count < SIZE; count++) {
       cout << ++numbers[count] << '\n';
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
