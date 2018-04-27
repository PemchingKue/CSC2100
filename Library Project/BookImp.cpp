#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include "Book.h"
using namespace std;

void clrscr(){
	system("cls");
}

void Book::addBook(){         //To add a new book
	int m;
	int n;
	int k;

	clrscr();

	fstream f1;
	f1.open("book.txt", ios::out | ios::app);

	cout << "Enter the book name         :";
	cin >> name[z];
	cout << "Enter the Author's name     :";
	cin >> an[z];
	cout << "Enter the book ID           :";
	cin >> ID[z];
	cout << "Enter Availability (1 or 0) :";
	cin >> copy[z];

	m = strlen(name[z]);
	n = strlen(an[z]);
	k = strlen(ID[z]);

	f1.seekg(0, ios::end);
	f1 << endl;

	f1 << name[z];
	for (int i = 0; i<26 - m; i++)
		f1 << " ";
	f1 << an[z];
	for (int i = 0; i<22 - n; i++)
		f1 << " ";
	f1 << ID[z];
	for (int i = 0; i<17 - k; i++)
		f1 << " ";
	f1 << copy[z];
	f1 << " ";
	f1.close();

	z++;
}

void Book::add(){	//To return
	char j[20];
	clrscr();

	cin.ignore();
	cout << "Please enter the book name: ";
	cin.getline(j, 20);

	fstream f2;
	f2.open("book.txt", ios::in | ios::out | ios::_Nocreate);

	f2.seekg(0);

	char c[30];
	char d[30];
	int e;
	int r;
	int t;
	char *p = new char[1];

	while (f2.eof() == 0)
	{
		f2 >> c;
		f2 >> d;
		f2 >> r;
		f2 >> p;

		e = atoi(p);
		t = strlen(p);

		if (strcmp(c, j) == 0)
		{
			f2.seekg(-t, ios::cur);

			if (e >= 1)
			{
				cout << "The book is already returned.";
				_getch();
				break;
			}
			else if (e < 1){
				e++;
				f2 << e;
				cout << "The book has been returned.";
				_getch();
				break;
			}
		}
	}
	if (strcmp(c, j) != 0){
		cout << "Invalid book name.";
		_getch();
	}

	f2.close();
}

void Book::subtract(){	//To checkout book
	char j[20];
	clrscr();

	cin.ignore();
	cout << "Please enter the book name: ";
	cin.getline(j, 20);

	fstream f3;
	f3.open("book.txt", ios::in | ios::out | ios::_Nocreate);

	f3.seekg(0);

	char c[30];
	char d[30];
	int e;
	int r;
	int t;
	char *p = new char[1];

	while (f3.eof() == 0)
	{
		f3 >> c;
		f3 >> d;
		f3 >> r;
		f3 >> p;

		e = atoi(p);
		t = strlen(p);

		if (strcmp(c, j) == 0)
		{
			f3.seekg(-t, ios::cur);

			if (e > 0)
			{
				e--;
				f3 << e;
				cout << "The book has been checked out.";
				_getch();
				break;
			}
			else if (e < 1){
				cout << "The book is already checked out.";
				_getch();
				break;
			}
		}
	}
	if (strcmp(c, j) != 0){
		cout << "Invalid book name.";
		_getch();
	}

	f3.close();
}

void Book::display()          //To show the book list
{
	clrscr();

	fstream f4;
	f4.open("book.txt", ios::in | ios::app);
	f4.seekg(0);

	char a;
	cout << "\t *************** BOOK LIST ***************";
	cout << "\n\n";
	cout << "Bookname" << setw(25) << "Author" << setw(18) << "ID" << setw(17) << "Issued" << endl;
	cout << "--------" << setw(25) << "-------" << setw(18) << "---" << setw(17) << "------" << endl;

	while (f4)
	{
		f4.get(a);
		cout << a;
	}
	cout << endl;
	f4.close();
}

void Book::srchName()          //To search a book by name
{
	int i = 0;
	char j[20];
	int k = 0;

	clrscr();

	cin.ignore();
	cout << "Please enter the Name of the Book: ";
	cin.getline(j, 20);

	fstream f6;
	f6.open("book.txt", ios::in | ios::app);
	f6.seekg(0);

	char c[20];
	char d[20];
	int n;
	int p;

	while (f6.eof() == 0)
	{
		f6 >> c;
		f6 >> d;
		f6 >> n;
		f6 >> p;

		if (strcmp(c, j) == 0)
		{
			cout << "  Book name      : " << c << endl;
			cout << "  Author name    : " << d << endl;
			cout << "  ID             : " << n << endl;
			cout << "  Issued         : " << p << endl << endl;
			_getch();
			k++;
		}
		if (k == 1)
			break;
	}
	if (strcmp(c, j) != 0){
		cout << "The book does not exist.";
		_getch();
	}
}

void Book::srchAuthName()          //To search a book by name
{
	int i = 0;
	char j[20];
	int k = 0;

	clrscr();

	cin.ignore();
	cout << "Please enter the Name of the Author: ";
	cin.getline(j, 20);

	fstream f6;
	f6.open("book.txt", ios::in | ios::app);
	f6.seekg(0);

	char c[20];
	char d[20];
	int n;
	int p;

	while (f6.eof() == 0)
	{
		f6 >> c;
		f6 >> d;
		f6 >> n;
		f6 >> p;

		if (strcmp(d, j) == 0)
		{
			cout << "  Book name      : " << c << endl;
			cout << "  Author name    : " << d << endl;
			cout << "  ID             : " << n << endl;
			cout << "  Issued         : " << p << endl << endl;
			_getch();
			k++;
		}
		if (k == 1)
			break;
	}
	if (strcmp(d, j) != 0){
		cout << "The Author does not exist.";
		_getch();
	}
}