#include<iostream>
#include"Day.h"
using namespace std;

int main(void) {
	Day dflt, thu("THU");

	cout << "Default Constructor: " << dflt.getDay() << endl;
	cout << "Thursday Constructor: " << thu.getDay() << endl;
	thu.addDays(5);
	cout << "Added 5 days to Thursday: " << thu.getDay() << endl;

	cout << "Tomorrow is: " << thu.nextDay() << endl;
	cout << "Yesterday was: " << thu.prevDay() << endl;

	return 0;
}