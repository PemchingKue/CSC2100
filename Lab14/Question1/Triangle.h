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