// Bank Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool validatePin(const int customerInput[], const int actualArray[], int);

int main()
{
    const int NUM_DIGITS = 7; //Number of digits in a pin.
    int pin1[NUM_DIGITS] = { 2,4,1,8,7,9,0 };//Base set of values.
    int pin2[NUM_DIGITS] = { 2,4,6,8,7,9,0 };//Only one element is different from pin1.

    int pin3[NUM_DIGITS] = { 1,2,3,4,5,6,7 }; //All digits different from pin1.

    if (validatePin(pin1, pin2, NUM_DIGITS)) {
        cout << "Error: pin1 and pin2 report to be the same.\n";
    }
    else {
        cout << "SUCCESS: pin1 and pin2 are different.\n";
    }
    
    if (validatePin(pin1, pin3, NUM_DIGITS)) {
        cout << "ERROR: pin1 and pin3 report to be the same.\n";
    }
    else {
        cout << "SUCCESS: pin1 and pin3 report to be different.\n";
    }

    if (validatePin(pin1, pin1, NUM_DIGITS)) {
        cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    }
    else {
        cout << "ERROR: pin1 and pin1 report to be different.\n";
    }
}

// validatePin() takes in the customerInputPIN and databasePIN arrays, and their size as parameters.
// Use a for loop over the entire size of the array, and compare each index. 
// If the values dont match for an index, immediately return from the method
// with a 'false' boolean value.
bool validatePin(const int customerInputPIN[], const int databasePIN[], int size)
{
    for (int i = 0; i < size; i++) {
        if (customerInputPIN[i] != databasePIN[i]) {
            return false;
        }
    }
    return true; // If we make it here, the values are the same for both arrays, so return true.
}
