// MarkupProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//function prototypes to prompt user, enter wholesale and markup values, and then calculate retail.
void promptUser();
void enterWholesaleAndMarkup(double& wholesale, double& percent);
double calculateRetail(double, double);

int main()
{
    double wholesale = 0;
    double markupPercent = 0;

    promptUser();
    enterWholesaleAndMarkup(wholesale, markupPercent);
    while (wholesale <= 0 || markupPercent <= 0) {
        cout << "Error. Wholesale value or markup percent can't be 0 or negative.\n";
        enterWholesaleAndMarkup(wholesale, markupPercent);
    }
    cout << "Retail value is $" << calculateRetail(wholesale, markupPercent);
}

void promptUser() {
    cout << "Enter an item's wholesale cost and it's markup percentage.\n";
}
void enterWholesaleAndMarkup(double &wholesale, double &markupPercent) {
    cin >> wholesale;
    cin >> markupPercent;
}

double calculateRetail(double wholesale, double markup) {
    double markupPercent = markup * 0.01;
    double retailPrice = (markupPercent * wholesale) + wholesale;
    return retailPrice;

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
