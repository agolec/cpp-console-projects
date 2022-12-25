// Minimum-Maximum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
        Write a program asking the user to input two numbers. The program should use the conditional operator to determine
        which number is smaller and which is larger.

        Pseudocode:

        Prompt user that they should enter two numbers with spaces.
        Get input Number 1
        Get input Number 2
        Determine which number is larger of the two.
        Tell the user which values they entered.
        Tell the user which of the two is larger.
*/

#include <iostream>
using namespace std;

int main()
{
    int numberOne, numberTwo = 0;

    cout << "Enter two numbers with spaces between them and I will tell you which is larger of the two.";
    cin >> numberOne >> numberTwo;

    cout << "You have entered " << numberOne << " for numberOne." << endl;
    cout << "You have entered " << numberTwo << " for numberTwo." << endl;

    if (numberOne > numberTwo) {
        cout << "Number one is larger." << endl;
    }
    else if (numberTwo > numberOne) {
        cout << "Number two is larger." << endl;
    }
    else {
        cout << "Both are equal." << endl;
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
