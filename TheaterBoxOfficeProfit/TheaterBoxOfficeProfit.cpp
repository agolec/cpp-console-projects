// TheaterBoxOfficeProfit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "TheaterBoxOfficeProfit.h"

using namespace std;

int CountDigitsInGrossValue(double n)
{
    if (n == 0) {
        return 1;
    }
    int count = 0;
    while (n > 1) {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    const double ADULT_COST = 10.00;
    const double CHILD_COST = 6.00;
    const float AMOUNT_PERCENT_DISTRIBUTOR = 0.8;
    const float AMOUNT_PERCENT_THEATER = 0.2;

    const int PRECISION_SET = 2;

    double distributorProfit = 0;
    double netProfit = 0;
    double grossProfit = 0;

    int childTicketsSold = 0;
    int adultTicketsSold = 0;

    int digitCountDistribution = 0;
    int digitCountNetProfit = 0;
    int digitCountGrossProfit = 0;

    string nameOfFilm;
    string movieNameHeader = "Movie Name:";
    string adultTicketSoldString = "Adult Tickets Sold: ";
    string childTicketSoldString = "Childen Tickets Sold: ";
    string grossBoxOfficeString = "Gross Box Office Profit: ";
    string netBoxOfficeProfitString = "Net Box Office Profit: ";
    string amountPaidDistribution = "Amount Paid to Distributor: ";

    cout << "Enter the name of the film you saw.";
    getline(cin, nameOfFilm);

    cout << "How many tickets were sold for children?";
    cin >> childTicketsSold;

    cout << "How many tickets were sold for adults?";
    cin >> adultTicketsSold;


    grossProfit = (childTicketsSold * CHILD_COST) + (adultTicketsSold * ADULT_COST);
    distributorProfit = grossProfit * AMOUNT_PERCENT_DISTRIBUTOR;
    netProfit = grossProfit * AMOUNT_PERCENT_THEATER;

    digitCountDistribution = CountDigitsInGrossValue(distributorProfit);
    digitCountNetProfit = CountDigitsInGrossValue(netProfit);
    digitCountGrossProfit = CountDigitsInGrossValue(grossProfit);

    const int INTRO_PADDING = 20;
    const int PADDING = 10;

    cout << setprecision(5);
    cout << setfill('.') << setprecision(PRECISION_SET) << fixed;

    cout << movieNameHeader  << setw(40 - movieNameHeader.size()) << "\"" << nameOfFilm << "\"" << endl;
    cout << adultTicketSoldString <<  setw(40 - adultTicketSoldString.size() + nameOfFilm.size()) << adultTicketsSold << endl;
    cout << childTicketSoldString << setw(40 - childTicketSoldString.size() + nameOfFilm.size()) << childTicketsSold << endl;
    cout << grossBoxOfficeString << setw(40 - grossBoxOfficeString.size() + nameOfFilm.size() - digitCountGrossProfit - PRECISION_SET - 1) <<  "$" << grossProfit << endl;
    cout << netBoxOfficeProfitString << setw(40 - netBoxOfficeProfitString.size() + nameOfFilm.size() - digitCountNetProfit - PRECISION_SET - 1) << "$" << netProfit << endl;
    cout << amountPaidDistribution << setw(40 - amountPaidDistribution.size() + nameOfFilm.size() - digitCountDistribution - PRECISION_SET - 1) << "$" << distributorProfit << endl;

    return 0;
}