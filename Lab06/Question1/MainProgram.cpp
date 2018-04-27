#include <iostream>
#include "clockType.h"

using namespace std;

int main()
{
	clockType myClock;

	int hours;
	int minutes;
	int seconds;


	myClock.setTime(5, 4, 30);

	cout << "Current clock (hr:min:sec): ";
	myClock.printTime();
	cout << endl;

	cout << "Update hours: ";
	cin >> hours;
	cout << endl;

	myClock.setHours(hours);
	myClock.getHours(hours);
	myClock.getMinutes(minutes);

	cout << "Current clock (hr:min): "<<"0"<<hours<< ":" <<"0"<<minutes;
	cout << endl;

	cout << "Update minutes: ";
	cin >> minutes;
	cout << endl;

	myClock.setMinutes(minutes);
	myClock.getMinutes(minutes);
	myClock.getSeconds(seconds);

	cout << "Current clock (min:sec): " << minutes << ":" << seconds;
	cout << endl;

	cout << "Update seconds: ";
	cin >> seconds;
	cout << endl;

	myClock.setSeconds(seconds);

	cout << "Current clock (hr:mins:sec): ";
	myClock.printTime();
	cout << endl;


	return 0;
}



