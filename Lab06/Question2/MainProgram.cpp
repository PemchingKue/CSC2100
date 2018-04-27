#include <iostream>
#include <string>
#include "memberType.h"
using namespace std;

int main(){
	memberType member1;
	memberType member2;

	string name;
	int id;
	int books;

	member1.getName(name);
	member1.getId(id);
	member1.getBooks(books);

	cout << "Member 1: Initialized using the constructor function" << endl;
	cout << "Name of the person: " << name << ", " << "Member ID: " << id << ", "
		 << "Number of books bought: " << books << endl << endl;

	member2.setMember("Robert De", 200, 2);
	member2.getName(name);
	member2.getId(id);
	member2.getBooks(books);

	cout << "Member 2: Created a new member using utility function of the class" << endl;
	cout << "Name of the person: " << name << ", " << "Member ID: " << id << ", "
		 << "Number of books bought: " << books << endl << endl;

	cout << "Modify name for member 2: ";
	getline(cin, name);
	member2.setName(name);
	
	cout << "Modify member ID for member 2: ";
	cin >> id;
	member2.setId(id);

	cout << "Modify number of books bought for member 2: ";
	cin >> books;
	member2.setBooks(books);

	cout << "\n";

	member2.getName(name);
	member2.getId(id);
	member2.getBooks(books);

	cout << "Member 2:" << endl;
	cout << "Updated name: " << name << endl;
	cout << "Updated ID: " << id << endl;
	cout << "Updated number of books bought: " << books << endl;

	return 0;
}