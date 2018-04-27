/*
* Declaration of Day
*/
#include<string>
using namespace std;

class Day {
public:
	Day();				/* Default constructor */
	Day(string day);	/* Parameterized constructor */

	/*
	* Sets the current day to newDay
	* value must be in the range:
	* "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"
	*/
	void setDay(string day);

	/*
	* Gets the current day, values will be in the range:
	* "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"
	*/
	string getDay();

	/*
	* Increments the current day by numDays
	*/
	void addDays(int numDays);
	/* Returns the next day */
	string nextDay();

	/* Returns the previous day */
	string prevDay();
private:
	int getIdx(string day);
	string getStr(int idx);
	string _day;
};