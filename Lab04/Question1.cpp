#include <iostream>
#include "stdlib.h"
#include "time.h"

using namespace std;

#define SIZE 20

void search(int a[], int length, int key){
	int count[SIZE] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	srand((int)time(NULL));

	for (int i = 0; i < length; i++){
		a[i] = rand() % 11;
		cout << a[i] <<" ";
	}
	cout<<"\n";
	for (int i = 0; i < length; i++){
		if (a[i] == key){
			cout << key << " is found! ";
			break;
		}
	}
	for (int i = 0; i < length; i++){
		if (a[i] < length){
			count[a[i]]++;
		}
	}
	for (int j = 0; j < length; j++){
		if (j == key)
			cout << "the number of occurence: " << count[j]<<endl;
	}
}

int main(){
	
	int a[SIZE];
	int length;
	int key;

	length = SIZE;

	cout << "Enter the Key: ";
	cin >> key;

	search(a, length, key);

	cout << "\n";
	return 0;
}