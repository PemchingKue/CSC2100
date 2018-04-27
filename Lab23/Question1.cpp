#include<iostream>
#include<string>
using namespace std;

/**
* Adds a string to the list.
*
* Since the list is resized, it returns a pointer to
* the newly allocated memory.
*
* Note: stringList will be released by this function,
* but the individual strings will not.
*
* stringList - the current array of character pointers to strings
* count - the number of elements in stringList
* str - the string being added.
*/
char** addString(char *stringList[], size_t count, char *str) {
	/*
	* The following statement is a place holder,
	* allowing the program to compile.
	*/
	stringList[count] = str;
	
	return stringList;
	
}


void printStrings(char *stringList[], size_t count) {
	cout << "List: ";
	for (size_t i = 0; i < count; i++) {
		cout << stringList[i] << " ";
	}
	cout << endl;
}

int main(void) {
	char **stringList = new char*[0];
	size_t count = 0;

	cout << "Echo with History" << endl
		<< "Please enter an integer, it will be echo'd back to you" << endl
		<< "This will continue until you press CTRL-Z and enter" << endl;
	do {
		cout << "> ";
		string user;
		cin >> user;
		size_t len = user.length() + 1;
		char *str = new char[len];
		memcpy_s(str, len, user.c_str(), len);
		stringList = addString(stringList, count, str);
		count++;
		printStrings(stringList, count);
	} while (!cin.fail());

	/* Release the individual char* */
	for (size_t i = 0; i < count; i++) {
		delete stringList[i];
	}
	/* Release the array of char* pointers */
	delete stringList;
	return 0;
}