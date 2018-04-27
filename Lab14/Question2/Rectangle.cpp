#include <iostream>
#include <string>
using namespace std;
#include "Rectangle.h"

Rectangle::Rectangle(float length, float width){
	len = length;
	wid = width;
}
void Rectangle::set(float length, float width){
	len = length;
	wid = width;
}
void Rectangle::get(float &length, float &width){
	length = len;
	width = wid;
}
string Rectangle::getType(){
	return "RECTANGLE";
}
float Rectangle::area(){
	return len * wid;
}