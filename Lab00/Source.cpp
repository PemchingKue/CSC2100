#include <iostream>
#include<string>
using namespace std;

#define CYEAR 2017

int main()
{
	int sid;
	int gradYear;
	string name;

	cout << "Please enter your name and student id "
		 << "space separated: ";
	cin >> name >> sid;

	cout << "What year do you (expect) to graduate: ";
	cin >> gradYear;

	cout << "Welcome " << name << "(" << sid << ")"
		<< " to Wayne State" << endl
		<< "Invite us to your graduation in " << gradYear - CYEAR
		<< " years" << endl;

	return 0;
}