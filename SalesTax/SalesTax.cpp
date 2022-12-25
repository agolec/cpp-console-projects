// SalesTax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int purchaseMade = 95;
    float salesTax = 0.04;
    float stateTax = 0.02;

    float totalSalesTax = purchaseMade * salesTax;
    float totalStateTax = purchaseMade * stateTax;

    cout << "purchase total is: " << purchaseMade << endl;
    cout << "Total with sales tax is: " << (purchaseMade + totalSalesTax) << endl;
    cout << "Total with state tax is: " << (purchaseMade + totalStateTax) << endl;
    cout << "Total with sales and state tax is: " << (purchaseMade + totalSalesTax + totalStateTax) << endl;
    
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
