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

template<class C, class D> class mFill{
public:
	C maxFill(C const &other1, D const &other2){
		return (other1 / other2);
	}
	mFill(C a){
		fill = a;
	}
	mFill(){
		fill = 0;
	}
private:
	C fill;
};