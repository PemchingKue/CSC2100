#include <iostream>
#include <string>
using namespace std;

class Rectangle {
public:
	Rectangle(float length = 0, float width = 0);
	void set(float length, float width);
	void get(float &length, float &width);
	string getType(); // Returns “RECTANGLE”
	float area();
private:
	float len, wid;
};