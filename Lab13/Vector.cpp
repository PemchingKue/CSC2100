#include <iostream>
using namespace std;
#include "Vector.h"



float Vector::getX() const{
	return x;
}
float Vector::getY() const{
	return y;
}
Vector::Vector(){
	x = 0;
	y = 0;
}
Vector::Vector(float xVal, float yVal){
	x = xVal;
	y = yVal;
}


