#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#ifndef Magazine_H
#define Magazine_H
#include "Lib_Item.h"
using namespace std;

class Magazine : public Lib_Item{
	int z;

public:

	void addMagazine();
	void add();
	void subtract();
	void display();
	void srchIssue();
	void srchName();

	void initial(){ z = 0; }
};

#endif