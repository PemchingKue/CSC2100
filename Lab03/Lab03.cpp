//==========================================================
//
//  Title:      Lab03
//  Course:     CSC 2101
//  Lab Number: 001
//  Author:     Pemching Kue
//  Date:       1/24/17
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
#include <cmath>
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.


int main()
{
	int a[5];

	for (int i = 0; i < 5; i++){
		cout << "Enter the 1st Integer." << endl;
		cin >> a[i];
	}

	for (int i = 0; i < 5; i++){
		cout << a[i] << setw(6);
		
	}
	cout << "\n";

	for (int i = 0; i < 5; i++){

		a[i] = 5;
		a[i] = a[i] * a[i] * a[i];
		cout << a[i];
	}

	for (int i = 0; i < 5; i++){
		if (a[i] % 2 != 0)
			cout << a[i] << " ";
		a[i]++;
	}



	return 0;

}
