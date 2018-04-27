#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include "Journal.h"
using namespace std;

void clrscr2(){
	system("cls");
}

void Journal::addJournal(){         //To add a new Journal
	int m;
	int n;
	int k;

	clrscr2();

	fstream a1;
	a1.open("journal.txt", ios::out | ios::app);

	cout << "Enter the Journal name      :";
	cin >> name[z];
	cout << "Enter the Author's name     :";
	cin >> an[z];
	cout << "Enter the Journal volume    :";
	cin >> ID[z];
	cout << "Enter Availability (1 or 0) :";
	cin >> copy[z];

	m = strlen(name[z]);
	n = strlen(an[z]);
	k = strlen(ID[z]);

	a1.seekg(0, ios::end);
	a1 << endl;

	a1 << name[z];
	for (int i = 0; i<26 - m; i++)
		a1 << " ";
	a1 << an[z];
	for (int i = 0; i<22 - n; i++)
		a1 << " ";
	a1 << ID[z];
	for (int i = 0; i<17 - k; i++)
		a1 << " ";
	a1 << copy[z];
	a1 << " ";
	a1.close();

	z++;
}

void Journal::add(){	//To return
	char j[20];
	clrscr2();

	cin.ignore();
	cout << "Please enter the Journal name: ";
	cin.getline(j, 20);

	fstream a2;
	a2.open("journal.txt", ios::in | ios::out | ios::_Nocreate);

	a2.seekg(0);

	char c[30];
	char d[30];
	int e;
	int r;
	int t;
	char *p = new char[1];

	while (a2.eof() == 0)
	{
		a2 >> c;
		a2 >> d;
		a2 >> r;
		a2 >> p;

		e = atoi(p);
		t = strlen(p);

		if (strcmp(c, j) == 0)
		{
			a2.seekg(-t, ios::cur);

			if (e >= 1)
			{
				cout << "The Journal is already returned.";
				_getch();
				break;
			}
			else if (e < 1){
				e++;
				a2 << e;
				cout << "The Journal has been returned.";
				_getch();
				break;
			}
		}
	}
	if (strcmp(c, j) != 0){
		cout << "Invalid Journal name.";
		_getch();
	}

	a2.close();
}

void Journal::subtract(){	//To checkout Journal
	char j[20];
	clrscr2();

	cin.ignore();
	cout << "Please enter the Journal name: ";
	cin.getline(j, 20);

	fstream a3;
	a3.open("journal.txt", ios::in | ios::out | ios::_Nocreate);

	a3.seekg(0);

	char c[30];
	char d[30];
	int e;
	int r;
	int t;
	char *p = new char[1];

	while (a3.eof() == 0)
	{
		a3 >> c;
		a3 >> d;
		a3 >> r;
		a3 >> p;

		e = atoi(p);
		t = strlen(p);

		if (strcmp(c, j) == 0)
		{
			a3.seekg(-t, ios::cur);

			if (e > 0)
			{
				e--;
				a3 << e;
				cout << "The Journal has been checked out.";
				_getch();
				break;
			}
			else if (e < 1){
				cout << "The Journal is already checked out.";
				_getch();
				break;
			}
		}
	}
	if (strcmp(c, j) != 0){
		cout << "Invalid Journal name.";
		_getch();
	}

	a3.close();
}

void Journal::display()          //To show the Journal list
{
	fstream a4;
	a4.open("journal.txt", ios::in | ios::app);
	a4.seekg(0);

	char a;
	cout << "\t*************** JOURNAL LIST ***************";
	cout << "\n\n";
	cout << "Journal" << setw(25) << "Author" << setw(18) << "Volume" << setw(17) << "Issued" << endl;
	cout << "--------" << setw(25) << "-------" << setw(18) << "------" << setw(17) << "------" << endl;

	while (a4)
	{
		a4.get(a);
		cout << a;
	}
	cout << endl;
	a4.close();
}

void Journal::srchVolume(){  //search journal by volume
	int i = 0;
	int j = 0;
	int k = 0;

	clrscr2();

	cout << "Please enter the Journal Volume: ";
	cin >> j;

	fstream a5;
	a5.open("journal.txt", ios::in | ios::app);
	a5.seekg(0);

	char c[20];
	char d[20];
	int n;
	int p;

	while (a5.eof() == 0)
	{
		a5 >> c;
		a5 >> d;
		a5 >> n;
		a5 >> p;

		if (n == j)
		{
			cout << "  Book name      : " << c << endl;
			cout << "  Author name    : " << d << endl;
			cout << "  Volume         : " << n << endl;
			cout << "  Issued         : " << p << endl << endl;
			_getch();
			k++;
		}
		if (k == 1)
			break;
	}
	if (n != j){
		cout << "The Journal does not exist.";
		_getch();
	}
}

void Journal::srchName()          //To search a Journal by name
{
	int i = 0;
	char j[20];
	int k = 0;

	clrscr2();

	cin.ignore();
	cout << "Please enter the Name of the Journal: ";
	cin.getline(j, 20);

	fstream a6;
	a6.open("journal.txt", ios::in | ios::app);
	a6.seekg(0);

	char c[20];
	char d[20];
	int n;
	int p;

	while (a6.eof() == 0)
	{
		a6 >> c;
		a6 >> d;
		a6 >> n;
		a6 >> p;

		if (strcmp(c, j) == 0)
		{
			cout << "  Book name      : " << c << endl;
			cout << "  Author name    : " << d << endl;
			cout << "  Volume         : " << n << endl;
			cout << "  Issued         : " << p << endl << endl;
			_getch();
			k++;
		}
		if (k == 1)
			break;
	}
	if (strcmp(c, j) != 0){
		cout << "The Journal does not exist.";
		_getch();
	}
}