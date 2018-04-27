#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

template<class C, class D>
void display(C Type, D Area){
	cout << "Area of a " << Type << " is " << Area << endl;
}

template<class E>
bool equalArea(E obj1, E obj2){
	if (obj1 == obj2){
		return 1;
	}
	else{
		return 0;
	}
}


int main(){
	mFill<float, float> r1;
	mFill2<float, float> t1;
	Rectangle r;
	Triangle t;
	float len;
	float wid;
	float b;
	float h;
	int test;

	cout << "Enter the base and height for a triangle : ";
	cin >> b >> h;
	t.set(b, h);

	cout << "Enter the length and width for a rectangle : ";
	cin >> len >> wid;
	r.set(len, wid);

	display(r.getType(), r.area());
	display(t.getType(), t.area());
	test = equalArea(r.area(), t.area());

	if (test == 1){
		cout << "The two objects are of equal area" << endl;
	}
	else{
		cout << "The two objects are of unequal area" << endl;
	}

	cout << "There are " << r1.maxFill(r.area(), t.area()) << " triangles that will fit in the rectangle" << endl;
	cout << "There are " << t1.maxFill(t.area(), r.area()) << " rectangles that will fit in the triangle" << endl;
	cout << "There are " << r1.maxFill(r.area(), r.area()) << " rectangles that will fit into the rectangle" <<endl;

	return 0;
}