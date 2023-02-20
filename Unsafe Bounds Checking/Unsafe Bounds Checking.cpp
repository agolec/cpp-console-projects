// Unsafe Bounds Checking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    const int SIZE = 3;
    int values[SIZE];
    int count;

    //Attempt to store five numbers in the three element array.
    cout << "I will store 5 numbers in the 3-element array!\n";
    for (count = 0; count < 5; count++) {
        values[count] = 100;
    }

    //If the program is still running, display the numbers.
    cout << "If you see this it means the program has not crashed! Here are your numbers:\n";
    for (count = 0; count < 5; count++) {
        cout << values[count] << "\n";
    }
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
