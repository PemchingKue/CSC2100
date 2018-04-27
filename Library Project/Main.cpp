#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include "Book.h"
#include "Journal.h"
#include "Magazine.h"
using namespace std;

Book bObj;
Journal jObj;
Magazine mObj;

void clrscr1()
{
	system("cls");
}

void aChoice(){ //Add choice
	int a;
	clrscr1();

	cout << "Please choose which category you want to add an item to:" << endl;
	cout << "1. Books" << endl;
	cout << "2. Journals" << endl;
	cout << "3. Magazines" << endl;
	cout << "Input your choice (1-3): ";
	cin >> a;

	if (a == 1){
		bObj.addBook();
	}
	else if (a == 2){
		jObj.addJournal();
	}
	else if (a == 3){
		mObj.addMagazine();
	}
	else{
		cout << "Please enter a valid input.";
		_getch();
	}
}

void cCheckout(){ //choose checkout
	int a;
	clrscr1();

	cout << "Please choose which type of book you want to checkout:" << endl;
	cout << "1. Books" << endl;
	cout << "2. Journals" << endl;
	cout << "3. Magazines" << endl;
	cout << "Input your choice (1-3): ";
	cin >> a;

	if (a == 1){
		bObj.subtract();
	}
	else if (a == 2){
		jObj.subtract();
	}
	else if (a == 3){
		mObj.subtract();
	}else{
		cout << "Please enter a valid input.";
		_getch();
	}

}

void cReturn(){ //choose checkout
	int a;
	clrscr1();

	cout << "Please choose which type of book you want to return:" << endl;
	cout << "1. Books" << endl;
	cout << "2. Journals" << endl;
	cout << "3. Magazines" << endl;
	cout << "Input your choice (1-3): ";
	cin >> a;

	if (a == 1){
		bObj.add();
	}
	else if (a == 2){
		jObj.add();
	}
	else if (a == 3){
		mObj.add();
	}else{
		cout << "Please enter a valid input.";
		_getch();
	}

}

void sBook(){
	int a;
	clrscr1();

	cout << "Please choose search option: " << endl;
	cout << "1. Search by book name." << endl;
	cout << "2. Search by Author." << endl;
	cout << "Please input your choice (1-2): ";
	cin >> a;

	if (a == 1){
		bObj.srchName();
	}
	else if (a == 2){
		bObj.srchAuthName();
	}else{
		cout << "Please enter a valid input.";
		_getch();
	}
}

void sJournal(){
	int a;
	clrscr1();

	cout << "Please choose search option: " << endl;
	cout << "1. Search by Journal name." << endl;
	cout << "2. Search by Journal Volume." << endl;
	cout << "Please input your choice (1-2): ";
	cin >> a;

	if (a == 1){
		jObj.srchName();
	}
	else if (a == 2){
		jObj.srchVolume();
	}else{
		cout << "Please enter a valid input.";
		_getch();
	}
}

void sMagazine(){
	int a;
	clrscr1();

	cout << "Please choose search option: " << endl;
	cout << "1. Search by Magazine name." << endl;
	cout << "2. Search by Magazine Issue No." << endl;
	cout << "Please input your choice (1-2): ";
	cin >> a;

	if (a == 1){
		mObj.srchName();
	}
	else if (a == 2){
		mObj.srchIssue();
	}else{
		cout << "Please enter a valid input.";
		_getch();
	}
}

void sCategory(){
	int a;
	clrscr1();

	cout << "Please choose which category to search within:" << endl;
	cout << "1. Books." << endl;
	cout << "2. Journals." << endl;
	cout << "3. Magazines." << endl;
	cout << "Please input your choice (1-3): ";
	cin >> a;

	if (a == 1){
		sBook();
	}
	else if (a == 2){
		sJournal();
	}
	else if (a == 3){
		sMagazine();
	}else{
		cout << "Please enter a valid input.";
		_getch();
	}

}

void lCategory(){
	int a;
	clrscr1();

	cout << "Please choose which category to list:" << endl;
	cout << "1. Books." << endl;
	cout << "2. Journals." << endl;
	cout << "3. Magazines." << endl;
	cout << "Please input your choice (1-3): ";
	cin >> a;

	if (a == 1){
		bObj.display();
		_getch();
	}
	else if (a == 2){
		clrscr1();
		jObj.display();
		_getch();
	}
	else if (a == 3){
		clrscr1();
		mObj.display();
		_getch();
	}else{
		cout << "Please enter a valid input.";
		_getch();
	}

}

void cSearch(){ //choose wheter to list, or search
	int a;
	clrscr1();

	cout << "Please choose whether you want to list category, or search:" << endl;
	cout << "1. List Category by Book Type." << endl;
	cout << "2. Search by Category." << endl;
	cout << "Please input your choice (1-2): ";
	cin >> a;

	if (a == 1){
		lCategory();
	}
	else if (a == 2){
		sCategory();
	}else{
		cout << "Please enter a valid input.";
		_getch();
	}
}

void dCatalog(){
	bObj.display();
	cout << endl << endl;
	jObj.display();
	cout << endl << endl;
	mObj.display();
	cout << endl << endl;
}

int main(){

	char choice;

	bObj.initial();
	jObj.initial();
	mObj.initial();
	
	do{
		
		dCatalog();
		
		cout << "***----- WELCOME TO THE LIBRARY MANAGEMENT SYSTEM -----***" << endl << endl;
		cout << "1. Search Catalog" << endl;
		cout << "2. Check Out" << endl;
		cout << "3. Return" << endl;
		cout << "4. Add a New Item" << endl;
		cout << "5. Exit" << endl;
		cout << "Please Select Your Option (1-5): ";
		cin >> choice;

		switch (choice)
		{
		case '1':
			cSearch(); //choose search
			break;

		case '2':{
			cCheckout();
			break;
		}
		case '3':{
			cReturn();
			break;
		}
		case '4':{
			aChoice(); //add choice
			break;
		}
		case '5':{
			cout << "Exiting..." << endl;
			break;
		}

		default:cout << "\a";

		}
	} while (choice != '5');

	return 0;
}