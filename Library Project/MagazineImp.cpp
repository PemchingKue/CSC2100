#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include "Magazine.h"
using namespace std;

void clrscr3(){
	system("cls");
}

void Magazine::addMagazine(){         //To add a new Magazine
	int m;
	int n;
	int k;

	clrscr3();

	fstream b1;
	b1.open("magazine.txt", ios::out | ios::app);

	cout << "Enter the Magazine name     :";
	cin >> name[z];
	cout << "Enter the Author's name     :";
	cin >> an[z];
	cout << "Enter the Magazine issue    :";
	cin >> ID[z];
	cout << "Enter Availability (1 or 0) :";
	cin >> copy[z];

	m = strlen(name[z]);
	n = strlen(an[z]);
	k = strlen(ID[z]);

	b1.seekg(0, ios::end);
	b1 << endl;

	b1 << name[z];
	for (int i = 0; i<26 - m; i++)
		b1 << " ";
	b1 << an[z];
	for (int i = 0; i<22 - n; i++)
		b1 << " ";
	b1 << ID[z];
	for (int i = 0; i<17 - k; i++)
		b1 << " ";
	b1 << copy[z];
	b1 << " ";
	b1.close();

	z++;
}

void Magazine::add(){	//To return
	char j[20];
	clrscr3();

	cin.ignore();
	cout << "Please enter the Magazine name: ";
	cin.getline(j, 20);

	fstream b2;
	b2.open("magazine.txt", ios::in | ios::out | ios::_Nocreate);

	b2.seekg(0);

	char c[30];
	char d[30];
	int e;
	int r;
	int t;
	char *p = new char[1];

	while (b2.eof() == 0)
	{
		b2 >> c;
		b2 >> d;
		b2 >> r;
		b2 >> p;

		e = atoi(p);
		t = strlen(p);

		if (strcmp(c, j) == 0)
		{
			b2.seekg(-t, ios::cur);

			if (e >= 1)
			{
				cout << "The Magazine is already returned.";
				_getch();
				break;
			}
			else if (e < 1){
				e++;
				b2 << e;
				cout << "The Magazine has been returned.";
				_getch();
				break;
			}
		}
	}
	if (strcmp(c, j) != 0){
		cout << "Invalid Magazine name.";
		_getch();
	}

	b2.close();
}

void Magazine::subtract(){	//To checkout Magazine
	char j[20];
	clrscr3();

	cin.ignore();
	cout << "Please enter the Magazine name: ";
	cin.getline(j, 20);

	fstream b3;
	b3.open("magazine.txt", ios::in | ios::out | ios::_Nocreate);

	b3.seekg(0);

	char c[30];
	char d[30];
	int e;
	int r;
	int t;
	char *p = new char[1];

	while (b3.eof() == 0)
	{
		b3 >> c;
		b3 >> d;
		b3 >> r;
		b3 >> p;

		e = atoi(p);
		t = strlen(p);

		if (strcmp(c, j) == 0)
		{
			b3.seekg(-t, ios::cur);

			if (e > 0)
			{
				e--;
				b3 << e;
				cout << "The Magazine has been checked out.";
				_getch();
				break;
			}
			else if (e < 1){
				cout << "The Magazine is already checked out.";
				_getch();
				break;
			}
		}
	}
	if (strcmp(c, j) != 0){
		cout << "Invalid Magazine name.";
		_getch();
	}

	b3.close();
}

void Magazine::display()          //To show the Magazine list
{
	fstream b4;
	b4.open("magazine.txt", ios::in | ios::app);
	b4.seekg(0);

	char a;
	cout << "\t*************** MAGAZINE LIST ***************";
	cout << "\n\n";
	cout << "Magazine" << setw(25) << "Author" << setw(18) << "Issue No." << setw(17) << "Issued" << endl;
	cout << "--------" << setw(25) << "-------" << setw(18) << "--------" << setw(17) << "------" << endl;

	while (b4)
	{
		b4.get(a);
		cout << a;
	}
	cout << endl;
	b4.close();
}

void Magazine::srchIssue(){  //search journal by Issue No.
	int i = 0;
	int j = 0;
	int k = 0;

	clrscr3();

	cout << "Please enter the Magazine Issue No.: ";
	cin >> j;

	fstream b5;
	b5.open("magazine.txt", ios::in | ios::app);
	b5.seekg(0);

	char c[20];
	char d[20];
	int n;
	int p;

	while (b5.eof() == 0)
	{
		b5 >> c;
		b5 >> d;
		b5 >> n;
		b5 >> p;

		if (n == j)
		{
			cout << "  Book name      : " << c << endl;
			cout << "  Author name    : " << d << endl;
			cout << "  Issue No.      : " << n << endl;
			cout << "  Issued         : " << p << endl << endl;
			_getch();
			k++;
		}
		if (k == 1)
			break;
	}
	if (n != j){
		cout << "The Magazine does not exist.";
		_getch();
	}
}

void Magazine::srchName()          //To search a Magazine by name
{
	int i = 0;
	char j[20];
	int k = 0;

	clrscr3();

	cin.ignore();
	cout << "Please enter the Name of the Magazine: ";
	cin.getline(j, 20);

	fstream b6;
	b6.open("magazine.txt", ios::in | ios::app);
	b6.seekg(0);

	char c[20];
	char d[20];
	int n;
	int p;

	while (b6.eof() == 0)
	{
		b6 >> c;
		b6 >> d;
		b6 >> n;
		b6 >> p;

		if (strcmp(c, j) == 0)
		{
			cout << "  Book name      : " << c << endl;
			cout << "  Author name    : " << d << endl;
			cout << "  Issued No.     : " << n << endl;
			cout << "  Issued         : " << p << endl << endl;
			_getch();
			k++;
		}
		if (k == 1)
			break;
	}
	if (strcmp(c, j) != 0){
		cout << "The Magazine does not exist.";
		_getch();
	}
}