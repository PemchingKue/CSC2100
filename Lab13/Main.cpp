#include <iostream>
using namespace std;
#include "Vector.h"

int main(){

	Vector x;
	Vector y;
	Vector z;

	cout << "Enter the space separated x and y values for the first vector (v1): ";
	cin >> x;
	cout << x;
	cout << "Enter the space separated x and y values for the second vector (v2): ";
	cin >> y;
	cout << y;

	cout << endl;

	z = x + y;
	cout << z <<endl;

	z = x - y;
	cout << z << endl;

	return 0;
}