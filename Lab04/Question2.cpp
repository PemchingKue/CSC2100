#include <iostream>
#include "stdlib.h"
#include "time.h"
using namespace std;

#define SIZE 20

void selectionSort(int list[], int length){

	srand((int)time(NULL));

	int bigIndex;
	int location;
	int temp;

	for (int i = 0; i < length; i++){
		list[i] = rand() % 11;
	}
	
	for (int i = 0; i < length; i++)
	{
		bigIndex = i;
		for (location = i + 1; location < length; location++)
			if (list[location] > list[bigIndex]){
				bigIndex = location;
			}
		temp = list[bigIndex];
		list[bigIndex] = list[i];
		list[i] = temp;
	}
}

int main(){

	int a[SIZE];
	int length;

	length = SIZE;

	selectionSort(a, length);

	for (int i = 0; i < SIZE; i++){
		cout << a[i] << " ";
	}

	cout << "\n";

	return 0;
}