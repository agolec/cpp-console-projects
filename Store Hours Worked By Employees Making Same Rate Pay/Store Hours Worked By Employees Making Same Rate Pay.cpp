// Store Hours Worked By Employees Making Same Rate Pay.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

using std::fixed;
using std::showpoint;
using std::setprecision;


int main()
{
    const int NUMBER_OF_EMPLOYEES = 5;
    int hours[NUMBER_OF_EMPLOYEES];
    double payRate;
    double grossPay;

    //Input the hours worked.
    cout << "Enter the hours worked by: ";
    cout << NUMBER_OF_EMPLOYEES << " employees who all\n";
    cout << "earn the same hourly rate.\n";

    for (int index = 0; index < NUMBER_OF_EMPLOYEES; index++) {
        cout << "Employee #" << (index + 1) << ": ";
        cin >> hours[index];
    }

    // Input the hourly rate for all the employees.
    cout << "Enter the hourly pay for all the employees: ";
    cin >> payRate;

    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUMBER_OF_EMPLOYEES; index++) {
        grossPay = hours[index] * payRate;
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << "\n";
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
