// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int SOME_SHIT = 10;
    vector<int> numbers(SOME_SHIT);

    for (int i = 0; i < SOME_SHIT;i++) {
        cout << i << endl;
        numbers[i] = i + 1;
    }
    cout << "processed." << endl;

    for (int i = 0; i < SOME_SHIT; i++) {
        cout << numbers[i];
    }
    
    char continueInput = 'y';
    int numberInput = 0;

    //Prime the output of asking thr user for some input before entering the loop.
    cout << "Enter an integer: ";
    while (continueInput == 'y' || continueInput == 'Y') {

        cin >> numberInput;
        //There will be a newline that gets stuck in the cin object. Ignore one character to clear the buffer.
        cin.ignore(1, '\n');
        numbers.push_back(numberInput);
        cout << "Continue? Enter y/Y: ";
        cin.get(continueInput);
        cin.clear();
        //If the user entered y or Y earlier on line 37, prompt them to enter an integer again.
        if (continueInput == 'y' || continueInput == 'Y') {
            cout << "Enter an integer: ";
        }
    }

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << '\n';
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
