//==========================================================
//
//  Title:      Lab01
//  Course:     CSC 2101
//  Lab Number: 001
//  Author:     Pemching Kue
//  Date:       1/17/17
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
	int l;
	int w;
	int area;

	cout << "Enter the length and width space separated: ";
	cin >> l >> w;
	
	area = l*w;

	cout << "The area is: " << area << endl;

	if (l == w){
		cout << "It is a Square. \n";
	}
	else if(l != w){
		cout << "It is not a Square. \n";
	}

	return 0;
}
