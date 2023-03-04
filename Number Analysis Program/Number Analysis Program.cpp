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
#include "Number Analysis Program.h"

void OpenInputFile(std::string& filename, std::ifstream&, std::vector<double>&);

int GetLowestNumberFromVector(std::vector<double>& numbers);
int GetHighestNumberFromVector(std::vector<double>& numbers);
int GetSumOfAllNumbersFromVector(std::vector<double>& numbers);
int GetTotalNumbersFromArray(std::vector<double>& numbers);


int main()
{
	std::ifstream inputFile;
	std::string fileName;

	int lowestNumberInVector = 0;
	int highestNumberInVector = 0;
	int sumOfNumbers = 0;
	int totalNumbersInArray = 0;
	double averageValueOfVectorNumbers = 0;

	std::vector<double> numbers;

	OpenInputFile(fileName, inputFile, numbers);

	lowestNumberInVector = GetLowestNumberFromVector(numbers);
	std::cout << "lowest number is :" << lowestNumberInVector << std::endl;

	highestNumberInVector = GetHighestNumberFromVector(numbers);
	std::cout << "highest number is :" << highestNumberInVector << std::endl;

	sumOfNumbers = GetSumOfAllNumbersFromVector(numbers);
	std::cout << "Sum of all numbers is: " << sumOfNumbers << std::endl;

	totalNumbersInArray = GetTotalNumbersFromArray(numbers);
	std::cout << "Total numbers in the array was: " << totalNumbersInArray << std::endl;

	averageValueOfVectorNumbers = sumOfNumbers / numbers.size();
	std::cout << "Average of numbers is: " << averageValueOfVectorNumbers << std::endl;
}

int GetTotalNumbersFromArray(std::vector<double>& numbers) {
	int count = 0;
	for (auto i : numbers) {
		count++;
	}
	return count;
}

int GetSumOfAllNumbersFromVector(std::vector<double>& numbers) {
	int sumOfAllNumbers = 0;
	for (auto i : numbers) {
		sumOfAllNumbers += i;
	}
	return sumOfAllNumbers;
}

int GetHighestNumberFromVector(std::vector<double>& numbers)
{
	int highestNumberInVector = numbers[0];
	for (int i = 1; i < numbers.size(); i++) {
		if (numbers[i] >= highestNumberInVector) {
			highestNumberInVector = numbers[i];
		}
	}
	return highestNumberInVector;
}

int GetLowestNumberFromVector(std::vector<double>& numbers)
{
	int lowestNumberInVector = numbers[0];
	for (int i = 1; i < numbers.size(); i++) {
		if (numbers[i] <= lowestNumberInVector) {
			lowestNumberInVector = numbers[i];
		}
	}
	return lowestNumberInVector;
}

void OpenInputFile(std::string& fileName, std::ifstream& inputFile, std::vector<double>& numbers)
{
	std::cout << "Enter the name of a file and I will open it: ";
	std::cin >> fileName;

	inputFile.open(fileName);

	ReadInputFileDataIntoIntVector(inputFile, numbers);
}

void ReadInputFileDataIntoIntVector(std::ifstream& inputFile, std::vector<double>& numbers)
{
	if (inputFile) {
		int fileNumber;

		while (inputFile >> fileNumber) {
			numbers.push_back(fileNumber);
		}
		inputFile.close();
	}
	else if (inputFile.fail()) {
		std::cout << "Failed to open file" << std::endl;
		exit(EXIT_SUCCESS);
	}
}
