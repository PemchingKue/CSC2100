#include<iostream>
#include<math.h>
#include<string>
using namespace std;

class Shape {
public:
	virtual string getType() = 0;
	virtual double getPerimeter() = 0;
	virtual double getArea() = 0;
};

//Implement class Triangle here
class Triangle : public Shape{
public:

	string getType();
	double getPerimeter();
	double getArea();
	void setDims(int l, int b, int h);

	Triangle();
	Triangle(int l, int b, int h);

private:
	int length;
	int base;
	int height;
};
void Triangle::setDims(int l, int b, int h){
	length = l;
	base = b;
	height = h;
}
string Triangle::getType(){
	return "Triangle";
}
double Triangle::getPerimeter(){
	return (length + base + height);
}
double Triangle::getArea(){
	double s;
	s = (length + base + height) / 2;
	return sqrt(s * (s - length) * (s - base) * (s - height));
}
Triangle::Triangle(){
	length = 0;
	base = 0;
	height = 0;
}
Triangle::Triangle(int l, int b, int h){
	length = l;
	base = b;
	height = h;
}

//Implement class Circle here
class Circle : public Shape{
public:

	string getType();
	double getPerimeter();
	double getArea();
	void setDims(int d);

	Circle();
	Circle(int d);

private:
	int radius;
};
void Circle::setDims(int r){
	radius = r;
}
string Circle::getType(){
	return "Circle";
}
double Circle::getPerimeter(){
	return 2 * 3.14159 * radius;
}
double Circle::getArea(){
	return 3.14159 * (radius * radius);
}
Circle::Circle(){
	radius = 0;
}
Circle::Circle(int r){
	radius = r;
}

void describeShape(Shape &s) {
	double a = s.getArea();
	double p = s.getPerimeter();
	string t = s.getType();

	cout << "This " << t << " has a perimeter of: " << p
		<< " and an area of: " << a << endl;
}

/**
* Determines the larger are between the two Shape objects
* The larger area is stored in result
*/
void largerArea(Shape &a, Shape &b, double *result) {
	
	if (a.getArea() > b.getArea()){
		*result = a.getArea();
	}
	else if (a.getArea() < b.getArea()){
		*result = b.getArea();
	}
}

int main() {
	Triangle t;
	Circle c;
	c.setDims(2);
	t.setDims(3, 4, 5);

	describeShape(t);
	describeShape(c);

	double result;
	largerArea(t, c, &result);
	cout << "The larger area is: " << result << endl << endl;

	t.setDims(6, 8, 10);
	describeShape(t);
	describeShape(c);
	largerArea(t, c, &result);
	cout << "The larger area is: " << result << endl;


	return 0;
}
