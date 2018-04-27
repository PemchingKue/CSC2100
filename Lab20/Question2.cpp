#include <iostream>
#include <vector>
#include "time.h"
using namespace std;


int main(){

	srand((int)time(NULL));
	vector<int> list(15);

	for (int i = 0; i < list.size(); i++){
		list[i] = rand() % 1000;
	}
	
	cout << "Printing elements in the vector object: " << endl;
	for (int i = 0; i < list.size(); i++){
		cout << list[i] << " ";
	}      
	cout << endl;

	return 0;
}