#include <iostream>
using namespace std;

class Vector {
public:
	/* Default constructor, sets x and y to zero */
	Vector();
	/* Parameterized constructor, sets x to Xval, and y to yVal */
	Vector(float xVal, float yVal);
	/* Returns the floating point values of the x and y */
	float getX() const;
	float getY() const;
	/*
	* Inserts into the stream the string "(<x>, <y>)" where
	* <x> is the floating point value for x
	* <y> is the floating point value for y
	*/
	friend istream& operator>>(istream& input, Vector &v) {
		cin >> v.x >> v.y;
		return input;
	}
	friend ostream& operator<<(ostream& os, const Vector &v){
		cout << "Vector v1 : (" << v.x << " , " << v.y<< ")" << endl;
		return os;
	}
	/*
	* Sums two Vectors v1 and v2 together returning a new vector v3
	* Where addition is defined as
	*   v3.x = v1.x + v2.x
	*   v3.y = v1.y + v2.y
	*/
	Vector operator+(const Vector &other) const{
		Vector sum;
		sum.x = x + other.x;
		sum.y = y + other.y;
		
		return sum;
	}
	/*
	* Subtracts v2 from v1 returning a new vector v3
	* Where subtraction is defined as
	*   v3.x = v1.x - v2.x
	*   v3.y = v1.y - v2.y
	*/
	Vector operator-(const Vector &other) const{
		Vector sub;
		sub.x = x - other.x;
		sub.y = y - other.y;

		return sub;
	}
private:
	float x, y;
};