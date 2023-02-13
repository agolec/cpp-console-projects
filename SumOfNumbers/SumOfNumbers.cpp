// SumOfNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int sumInput = 0;
    int sumAccumulator = 0;
    cout << "Enter a number and I shall sum up every number up to it." << endl;

    cin >> sumInput;

    //Input validation for sumInput. sumInput must be between 1 and 100.
    while (sumInput > 100 || sumInput < 1) {
        cout << "Error. Number must be between 1 and 100" << endl;
        cout << "Enter anumber number" << endl;
        cin >> sumInput;
    }
    //For loop will add up every natural number from 1 up to the number the user entered.
    for (int i = 0; i < sumInput; i++) {
        sumAccumulator += i + 1;
    }
    cout << "Sum of all numbers entered is: " << sumAccumulator << "." << endl;
    cout << "sum accumulator reached value: " << sumAccumulator << endl;


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
