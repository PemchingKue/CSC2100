#include<iostream>
#include<string>
using namespace std;

class DimError {
private:
	string message;
public:
	//implement the methods
	DimError();
	DimError(string str);
	string what();
};
DimError::DimError(){
	message = "setWidth called with a negative width.";
}
DimError::DimError(string str){
	message = str;
}
string DimError::what(){
	return message;
}

class Rectangle {
private:
	int length, width;
public:
	void setWidth(int width);
	void setLength(int length);
	int area();

	Rectangle();
	Rectangle(int len, int wid);
};

void Rectangle::setWidth(int wid){
	width = wid;
	if (width < 0){
		throw DimError();
	}
}
void Rectangle::setLength(int len){
	length = len;
	if (length < 0){
		throw DimError();
	}
}
int Rectangle::area(){
	return length * width;
}
Rectangle::Rectangle(){
	length = 0;
	width = 0;
}
Rectangle::Rectangle(int len, int wid){
	length = len;
	width = wid;
}

int main(void) {
	Rectangle r;
	try {
		while (true) {
			int l, w;
			cout << "Enter a length: ";
			cin >> l;
			cout << "Enter a width: ";
			cin >> w;
			r.setLength(l);
			r.setWidth(w);
			cout << "The area is: " << r.area() << endl;
		}
	}
	catch (DimError de) {
		cout << "Couldn't set the rectangle's dimensions: " << endl
			<< de.what() << endl;
	}
	cout << "Exiting..." << endl;
	return 0;
}
