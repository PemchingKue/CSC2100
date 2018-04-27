#include <iostream>
#include <string>
using namespace std;
#include "Triangle.h"

Triangle::Triangle(float base, float height){
	b = base;
	h = height;
}
void Triangle::set(float base, float height){
	b = base;
	h = height;
}
void Triangle::get(float &base, float &height){
	base = b;
	height = h;
}
string Triangle::getType(){
	return "TRIANGLE";
}
float Triangle::area(){
	return (b * h) / 2;
}