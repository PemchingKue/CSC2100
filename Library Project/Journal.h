#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#ifndef Journal_H
#define Journal_H
#include "Lib_Item.h"
using namespace std;

class Journal : public Lib_Item{
	int z;

public:

	void addJournal();
	void add();
	void subtract();
	void display();
	void srchVolume();
	void srchName();
	
	void initial(){ z = 0; }
};

#endif