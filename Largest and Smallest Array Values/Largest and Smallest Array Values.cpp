// Largest and Smallest Array Values.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int largestNumber(const int[], int);
int smallestNumber(const int[], int);

int main()
{
    const int ARRAY_SIZE = 10;
    int numberArray[ARRAY_SIZE];
    int numberInput;
    int smallestInt = 0;
    int largestInt = 0;

    cout << "Enter ten integers and I'll tell you which is the largest and which is the smallest number contained in the array.\n";
    for (int iterator = 0; iterator < ARRAY_SIZE; iterator++) {
        cin >> numberInput;
        numberArray[iterator] = numberInput;
    }
    smallestInt = smallestNumber(numberArray, ARRAY_SIZE);
    largestInt = largestNumber(numberArray, ARRAY_SIZE);

    cout << "Largest number is :" << largestInt << endl;
    cout << "Smallest number is: " << smallestInt << endl;
    return 0;
}
int largestNumber(const int numberArray[], int size) {
    int largestNumber = 0;

    largestNumber = numberArray[0];
    for (int i = 1; i < size; i++) {
        if (numberArray[i] > largestNumber) {
            largestNumber = numberArray[i];
        }
    }
    return largestNumber;
}

int smallestNumber(const int numberArray[], int size) {
    int smallestNumber = 0;

    smallestNumber = numberArray[0];
    for (int i = 1; i < size; i++) {
        if (numberArray[i] < smallestNumber) {
            smallestNumber = numberArray[i];
        }
    }
    return smallestNumber;
}