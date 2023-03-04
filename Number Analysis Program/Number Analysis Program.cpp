// Number Analysis Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* Write a program that asks the user for a file name. Assume the file contains a series of numbers, each written on
* a separate line. the program should read in the contents of the file into an array and then display the following data:
* 
* The lowest number in the array.
* The highest number in the array.
* the total numbers in the array.
* The average numbers of the array.
* 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>


int main()
{
	std::ifstream inputFile;
	std::string fileName;

	int lowestNumberInVector = 0;
	int highestNumberInVector = 0;
	int sumOfNumbers = 0;
	double averaveValueOfVectorNumbers = 0;

	std::vector<double> numbers;

	std::cout << "Enter the name of a file and I will open it: ";
	std::cin >> fileName;

	inputFile.open(fileName);

	if (inputFile) {
		int fileNumber;

		while (inputFile >> fileNumber) {
			numbers.push_back(fileNumber);
		}
		inputFile.close();
	} else if (inputFile.fail()) {
		std::cout << "Failed to open file" << std::endl;
		exit(EXIT_SUCCESS);
	}

	lowestNumberInVector = numbers[0];
	for (int i = 1; i < numbers.size(); i++) {
		if (numbers[i] <= lowestNumberInVector) {
			lowestNumberInVector = numbers[i];
		}
	}
	std::cout << "lowest number is :" << lowestNumberInVector << std::endl;

	highestNumberInVector = numbers[0];
	for (int i = 1; i < numbers.size(); i++) {
		if (numbers[i] >= highestNumberInVector) {
			highestNumberInVector = numbers[i];
		}
	}
	std::cout << "highest number is :" << highestNumberInVector << std::endl;

	for (int i = 0; i < numbers.size(); i++) {
		sumOfNumbers += numbers[i];
	}
	std::cout << "Sum of all numbers is: " << sumOfNumbers << std::endl;

	averaveValueOfVectorNumbers = sumOfNumbers / numbers.size();
	std::cout << "Average of numbers is: " << averaveValueOfVectorNumbers << std::endl;
}
