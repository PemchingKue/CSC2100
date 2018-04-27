#include<iostream>
#include<cmath>
using namespace std;

/*
* Definition of class House goes here
*/

class House{

public:

	void setBeds(int bed);
	void setBaths(int bath);
	void setCars(int car);
	void setYear(int year);

	int getBeds();
	int getBaths();
	int getCars();
	int getYear();

	House();
	House(int bed, int bath, int car, int year);

private:
	int bed1;
	int bath1;
	int car1;
	int year1;
};

void House::setBeds(int bed){
	bed1 = bed;
}
void House::setBaths(int bath){
	bath1 = bath;
}
void House::setCars(int car){
	car1 = car;
}
void House::setYear(int year){
	year1 = year;
}

int House::getBeds(){
	return bed1;
}
int House::getBaths(){
	return bath1;
}
int House::getCars(){
	return car1;
}
int House::getYear(){
	return year1;
}

House::House(){
	bed1 = 0;
	bath1 = 0;
	car1 = 0;
	year1 = 0;
}
House::House(int bed, int bath, int car, int year){
	bed1 = bed;
	bath1 = bath;
	car1 = car;
	year1 = year;
}

/*
* Remainder of file remains unchanged
*/
int main(void) {
	House myHouse(3, 1, 3, 2001);
	House yourHouse;

	int input;
	cout << "How many bedrooms does your house have? ";
	cin >> input;
	yourHouse.setBeds(input);

	cout << "How many bathrooms does your house have? ";
	cin >> input;
	yourHouse.setBaths(input);

	cout << "How many cars fit in your garage? ";
	cin >> input;
	yourHouse.setCars(input);

	cout << "What year was your house built? ";
	cin >> input;
	yourHouse.setYear(input);

	int diff = myHouse.getBeds() - yourHouse.getBeds();
	cout << "Your house has " << abs(diff) << (diff < 0 ? " more" : " fewer") << " bedrooms" << endl;

	diff = myHouse.getBaths() - yourHouse.getBaths();
	cout << "Your house has " << abs(diff) << (diff < 0 ? " more" : " fewer") << " bathrooms" << endl;

	diff = myHouse.getCars() - yourHouse.getCars();
	cout << "Your garage holds " << abs(diff) << (diff < 0 ? " more" : " fewer") << " cars" << endl;

	diff = myHouse.getYear() - yourHouse.getYear();
	cout << "Your house was built " << abs(diff) << " years" << (diff < 0 ? " after" : " before") << " my own." << endl;

	return 0;
}