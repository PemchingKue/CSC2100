class clockType
{
public:
	void setTime(int hours, int minutes, int seconds);
	//Function to set the time.
	//The time is set according to the parameters.
	//Postcondition: hr = hours; min = minutes; 
	//               sec = seconds;
	//               The function checks whether the 
	//               values of hours, minutes, and seconds 
	//               are valid. If a value is invalid, the 
	//               default value 0 is assigned.
	void setHours(int hours);
	void setMinutes(int minutes);
	void setSeconds(int seconds);

	void getTime(int& hours, int& minutes, int& seconds) const;
	//Function to return the time.
	//Postcondition: hours = hr; minutes = min;
	//               seconds = sec;
	void getHours(int& hours);
	void getMinutes(int& minutes);
	void getSeconds(int& seconds);

	void printTime() const;
	//Function to print the time.
	//Postconditioimen: The t is printed in the form
	//               hh:mm:ss.

	clockType(int hours, int minutes, int seconds);
	//Constructor with parameters
	//The time is set according to the parameters.
	//Postcondition: hr = hours; min = minutes; 
	//               sec = seconds;
	//               The constructor checks whether the 
	//               values of hours, minutes, and seconds 
	//               are valid. If a value is invalid, the 
	//               default value 0 is assigned.

	clockType();
	//Default constructor
	//The time is set to 00:00:00.
	//Postcondition: hr = 0; min = 0; sec = 0;

private:
	int hr;  //variable to store the hours
	int min; //variable to store the minutes
	int sec; //variable to store the seconds
};