#include <iostream>
#include <string>
using namespace std;

class Triangle {
public:
	Triangle(float base = 0, float height = 0);
	void set(float base, float height);
	void get(float &base, float &height);
	string getType(); // Returns “TRIANGLE”
	float area();
private:
	float b, h;
};
template<class C, class D> class mFill2{
public:
	C maxFill(C const &other1, D const &other2){
		return (other1 / other2);
	}
	mFill2(C a){
		fill = a;
	}
	mFill2(){
		fill = 0;
	}
private:
	C fill;
};