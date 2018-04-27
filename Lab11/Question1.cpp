#include <iostream>
using namespace std;

class Car
{
private:
	double engineSize;
	char bodyStyle;
	int colorCode;
	char *vinPtr;
public:
	Car(double = 0.0, char = 'X', int = 0, char * = NULL);  //constructor
	Car(const Car&); // copy constructor
	~Car();
	void showData();
};

// write your code here

Car::Car(double eng, char style, int cd, char *pt){
	engineSize = eng;
	bodyStyle = style;
	colorCode = cd;

	int size = strlen(pt) + 1;
	vinPtr = new char[size];
	strcpy_s(vinPtr, size, pt);
	
}
Car::Car(const Car& other){
	engineSize = other.engineSize;
	bodyStyle = other.bodyStyle;
	colorCode = other.colorCode;

	int size = strlen(other.vinPtr) + 1;
	vinPtr = new char[size];
	strcpy_s(vinPtr, size, other.vinPtr);
}
void Car::showData(){
	cout << "The values for this object are:" << endl;
	cout << "     Engine size: " << engineSize << endl;
	cout << "     Body style: " << bodyStyle << endl;
	cout << "     Color code: " << colorCode << endl;
	cout << "     VIN: " << vinPtr << endl;
}

Car::~Car(){

	delete [] vinPtr;

}

int main()
{
	Car car1(250.0, 'S', 52, "ABC567YYY");
	Car car2(car1);
	car1.showData();
	car2.showData();

	return 0;
}