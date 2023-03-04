// Larger Than n.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Pseudocode for project.
*
* Write a function that accepts three arguments: an array, the size of the array, an a number, n.
*
* Assume the array contains integers. The function should display all the integers in the array greater than the number n.
*
* Pseudocode:
* for each element of the array, compare numberArray[i] > inputNumber ?
* If numberArray[i] > inputNumber, add it to string to print out.
*       else, do not add the number to the string to print out.
* When loop finishes, print all the numbers out to the user.
*/

#include <iostream>
#include <string>

using namespace std;

void listNumbersLargerThanInputArgument(const int numberArray[], int size, int inputNumber);

int main()
{
    const int ARRAY_SIZE = 5;
    const int numbersArgument[ARRAY_SIZE] = { 1,4,59,290,84999 };
    const int numbersArgumentNegativeNumbers[ARRAY_SIZE] = { -500,-400,-300,-200,-100 };

    int userNumber = 0;
    
    cout << "Enter some number to compare against an array of positive integers: ";
    cin >> userNumber;

    listNumbersLargerThanInputArgument(numbersArgument, ARRAY_SIZE, userNumber);

    cout << "Enter some other number and I will compare it with an array of negative numbers for funsies: ";
    cin >> userNumber;

    listNumbersLargerThanInputArgument(numbersArgumentNegativeNumbers, ARRAY_SIZE, userNumber);


}

void listNumbersLargerThanInputArgument(const int numberArray[], int size, int inputNumber)
{
    string outputString = "";
    for (int i = 0; i < size; i++) {
        if (numberArray[i] > inputNumber) {
            if (i != size - 1) {
                outputString += to_string(numberArray[i]) + ", ";
            }
            else {
                outputString += to_string(numberArray[i]);
            }
        }
    }
    cout << "numbers larger than: " << inputNumber << ":\n";
    cout << outputString + "\n\n";
}
