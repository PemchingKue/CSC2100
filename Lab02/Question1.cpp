//==========================================================
//
//  Title:      Question 1
//  Course:     CSC 2101
//  Lab Number: 001
//  Author:     Pemching Kue
//  Date:       1/19/17
//  Description:
//    
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
	int firstNum;
	int secondNum;

	cout << "Enter two space separated numbers: ";
	cin >> firstNum >> secondNum;

	if (firstNum > secondNum){
		cout << "I'm sorry the first number must be lesser than the second number. Please try again." << endl;
	}

	int num = firstNum;
	int Sum = 0;

	while (num <= secondNum){
		cout << num << " ";
		Sum += num;
		num++;
	}
	cout << "\n";
	cout << "Sum is: " << Sum << endl;

	num = firstNum + 1;
	while (num < secondNum){
	if (num % 2 != 0)
		cout << num << " ";
		num++;
	}
	cout << "\n";
	return 0;

}
