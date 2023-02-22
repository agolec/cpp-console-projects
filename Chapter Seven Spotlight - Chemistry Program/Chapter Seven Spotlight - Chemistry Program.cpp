// Chapter Seven Spotlight - Chemistry Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowestScore(const double[], int);


int main()
{
    const int NUMBER_OF_TESTS = 4;
    double testScores[NUMBER_OF_TESTS],
        total,
        lowestScore,
        average;

    //set up the numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    //Get the test scores from the user.
    getTestScores(testScores, NUMBER_OF_TESTS);

    //Get the total from the user
    total = getTotal(testScores, NUMBER_OF_TESTS);

    //Get the lowest score and assign it to lowestScore.
    lowestScore = getLowestScore(testScores, NUMBER_OF_TESTS);

    //Subtract the lowest score from total.
    //Another way to write this is total = total - lowestScore. -= is a shortcut.
    total -= lowestScore;

    //Calculate the average. Total / (NUMBER_OF_TESTS - 1).
    //Ex if NUMBER_OF_TESTS is 4, then we're calculating total / (4-1), or 3.
    average = total / (NUMBER_OF_TESTS -1);

    cout << "The total with the lowest score dropped is: " << total << endl;
    cout << "The average with the lowest score dropped is: " << average << endl;
}
void getTestScores(double scores[], int size) {
    //loop counter

    for (int index = 0; index < size; index++) {
        cout << "Enter text score number " << (index + 1) << ": ";
        cin >> scores[index];
    }
}
// getTotal takes the array and calculates the total number of all the elements in the array, and returns it so it can be assigned to a variable.
double getTotal(const double scores[], int size) {
    double total = 0;
    for (int index = 0; index < size; index++) {
        total += scores[index];
    }
    return total;
}
//getLowestScore will prime the variable 'lowest' with the value of scores[0], and then, starting from index 1, compare the rest of the array against
//'lowest'. If the value of 'lowest' is higher than the current iteration of 'scores[index], we reassign 'lowest' with that element's value.
//
// Once the loop finishes, we return the value in 'lowest'.

double getLowestScore(const double scores[], int size) {
    //Prime lowest with the value of scores[0].
    double lowest = scores[0];

    for (int index = 1; index < size; index++) {
        if (lowest > scores[index]) {
            lowest = scores[index];
        }
    }
    return lowest;
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
