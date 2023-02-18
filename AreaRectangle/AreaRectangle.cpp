// AreaRectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    double length = 0;
    double width = 0;
    double area = 0;

    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length,width, area);


}

double getLength() {
    double length = 0;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    return length;
}

double getWidth() {
    double width = 0;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    return width;
}

double getArea(double length, double width) {
    double area;
    cout << "Calculating area...\n";
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "The length is: " << length << "\n";
    cout << "The width is: " << width << "\n";
    cout << "The area is: " << area << "\n";
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
