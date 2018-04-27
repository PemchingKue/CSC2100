#include <iostream>
using namespace std;

class rectangle
{
public:
	rectangle(int len, int wid); //Parameterized Constructor
	rectangle();                //Default Constructor; Default lenght is 20 and default width is 10 

	void setWidth(int newWid); //Mutator function
	void setLength(int newLen);//Mutator function


	int getWidth() const;//Accessor function
	int getLength() const;//Accessor function


	void printRectangle(); //Print function

	int getArea();//Find Area; hint: Area is width * length
	int getPrimeter();//Find Perimeter; hint: Perimeter is (width + length)*2

	


private:
	int length;  //variable to store length
	int width; //variable to store width

};

//Start your class functions codes from here!
rectangle::rectangle(){
	length = 20;
	width = 10;
}
rectangle::rectangle(int len, int wid){
	len = length;
	wid = width;
}
void rectangle::printRectangle(){
	cout << "Rectangle: " << "Length = " << length << "Width = " << width;
}
int rectangle::getArea(){
	return length * width;
}
int rectangle::getPrimeter(){
	return (2 * length) + (2 * width);
}


// Driver program for the rectangle class
int main()
{
	rectangle s1;
	rectangle s2(5, 20);
	rectangle s3;

	//Display rectangles
	cout << "Rectangle s1 ";
	s1.printRectangle();
	cout << "Rectangle s2 ";
	s2.printRectangle();
	cout << "Rectangle s3 ";
	s3.printRectangle();
	// Test Equality

	//Display area and perimeter
	cout << "Area of s1=" << s1.getArea() << endl;
	cout << "Area of s2=" << s2.getArea() << endl;
	cout << "Perimeter of s1=" << s1.getPrimeter() << endl;
	cout << "Perimeter of s2=" << s2.getPrimeter() << endl;


	return 0;
}