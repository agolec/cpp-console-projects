// six-two-three.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void funct1(int&, int&);
void funct2(int&, int&, int&);
void funct3(int, int, int);

int main()
{
	int x = 0, y = 0, z = 0;

	cout << x << " " << y << " " << z << "\n";

	funct1(x, y);

	cout << x << " " << y << " " << z << "\n";

	funct2(x, y, z);

	cout << x << " " << y << " " << z << "\n";

	funct3(x, y, z);

	cout << x << " " << y << " " << z << "\n";
}

void funct1(int& a, int& b) {
	cout << "enter two numbers: ";
	cin >> a >> b;
}

void funct2(int& a, int& b, int& c) {
	b++;
	c--;
	a = b + c;
}
void funct3(int a, int b, int c) {
	a = b - c;
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
