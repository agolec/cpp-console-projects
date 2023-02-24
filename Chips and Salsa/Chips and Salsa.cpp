// Chips and Salsa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void enterJarsSoldByMonth(int[], string[], int);
void inputValidationForJarsSold(int  numberOfSalsaSold[], int i);
string getHighestSoldSalsaName(int[], string[], int);
string getLowestSoldSalsaName(int[], string[], int);


int main()
{
    /*
    This program will use two parallel arrays to track data.

    numberOfSalsaSold tracks how much of each type of salsa was sold per month. numberOfSalsaSold[0] corresponds
    to namesOfSalsa[0], which is 'mild'., and so on.

    */
    const int TOTAL_TYPES_OF_SALSA = 5;

    int numberOfSalsaSold[TOTAL_TYPES_OF_SALSA] = { 0,0,0,0,0 };
    string namesOfSalsa[TOTAL_TYPES_OF_SALSA] = { "Mild", "Medium","Sweet","Hot","Zesty" };


    enterJarsSoldByMonth(numberOfSalsaSold, namesOfSalsa, TOTAL_TYPES_OF_SALSA);


    return 0;
}
//using an array.
void enterJarsSoldByMonth(int numberOfSalsaSold[], const string namesOfSalsa[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter the number of sales for the month for the " << namesOfSalsa[i] << " salsa flavor: ";
        cin >> numberOfSalsaSold[i];
        inputValidationForJarsSold(numberOfSalsaSold, i);
    }
    return;
}
void inputValidationForJarsSold(int  numberOfSalsaSold[], int i)
{
    //After reading, use pre-test while loop against expresion numberOfSalsaSold[i] < 0 as input validation.
    //Continue to loop forever if this is 0.
    while (numberOfSalsaSold[i] < 0) {
        cout << "Number cannot be negative. Please enter another number now: ";
        cin >> numberOfSalsaSold[i];
    }
}
string getHighestSoldSalsaName(const int numberOfSalsaSold[], const string namesOfSalsa[], int size) {
    string highestSellingSalsaName;
    int highestSoldSalsaQuantity = 0;
    int index = 0;

    //Assign index to the 0th element of numberOfSalsaSold, then use the index to refer to namesOfSalsa[index] at 0 to assign the
    //string value of the array to highestSellingSalsa.

    highestSoldSalsaQuantity = numberOfSalsaSold[0];
    highestSellingSalsaName = namesOfSalsa[index];

    //Start loop at i = 1 and continue through rest of the loop searching for the highest selling salsa quantity.
    //When highestSoldSalsaQuantity is less than numberOfSalsaSold[i] - the latter of which is the array under search,
    //assign the numberOfSalsaSold[i] value to the variable 'highestSoldSalsaQuantity'. Then also assign the string 'highestSellingSalsa'
    //the value of the name found at namesOfSalsa[i].

    for (index = 1; index < size; index++) {
        if (highestSoldSalsaQuantity < numberOfSalsaSold[index]) {
            highestSoldSalsaQuantity = numberOfSalsaSold[index];
            highestSellingSalsaName = namesOfSalsa[index];
        }
    }
    return highestSellingSalsaName;

}

string getLowestSoldSalsaName(const int numberOfSalsaSold[], const string namesOfSalsa[], int size) {
    string lowestSellingSalsaName;
    int lowestSoldSalsaQuantity = 0;
    int index = 0;

    //Assign index to the 0th element of numberOfSalsaSold, then use the index to refer to namesOfSalsa[index] at 0 to assign the
    //string value of the array to highestSellingSalsa.

    lowestSoldSalsaQuantity = numberOfSalsaSold[0];
    lowestSellingSalsaName = namesOfSalsa[index];

    //Start loop at i = 1 and continue through rest of the loop searching for the highest selling salsa quantity.
    //When highestSoldSalsaQuantity is less than numberOfSalsaSold[i] - the latter of which is the array under search,
    //assign the numberOfSalsaSold[i] value to the variable 'highestSoldSalsaQuantity'. Then also assign the string 'highestSellingSalsa'
    //the value of the name found at namesOfSalsa[i].

    for (index = 1; index < size; index++) {
        if (lowestSoldSalsaQuantity > numberOfSalsaSold[index]) {
            lowestSoldSalsaQuantity = numberOfSalsaSold[index];
            lowestSellingSalsaName = namesOfSalsa[index];
        }
    }
    return lowestSellingSalsaName;

}