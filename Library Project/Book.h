#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#ifndef Book_H
#define Book_H
#include "Lib_Item.h"
using namespace std;

class Book : public Lib_Item{
	int z;

public:

	void addBook();
	void add();
	void subtract();
	void display();
	void srchName();
	void srchAuthName();

	void initial(){ z = 0; }
};

#endif