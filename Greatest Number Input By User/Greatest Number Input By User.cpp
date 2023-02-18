// Greatest Number Input By User.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int userInput = 0;
    int greatestNumber = 0;
    int smallestEntered = 0;
    const int QUIT = -99;

    //Prompt the user to enter numbers or -99 to quit.
    //Use  a do-while to control the number of times the user loops.
    //While (userInput != QUIT), which is the integer constant I declare on line 11, assigned the value -99, the program will continue to run indefinitely.
    std::cout << "Enter numbers and I will keep track of which one is highest and which is lowest. Enter -99 when finished.\n";
    do {   
        std::cin >> userInput;
        if (userInput < smallestEntered) {
            smallestEntered = userInput;
        }
        else if (userInput > greatestNumber) {
            greatestNumber = userInput;
        }
        
    } while (userInput != QUIT);

    std::cout << "The highest number entered is: " << greatestNumber << ".\n";

    std::cout << "The lowest number entered is: " << smallestEntered << ".\n";

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
