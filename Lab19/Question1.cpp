#include <iostream>
#include <string>
using namespace std;

void bubbleSort(char list[], int len){	//complete me
	int temp;

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - 1; j++) {
			if (list[j] < list[j + 1]){
				temp = list[j+1];
				list[j+1] = list[j];
				list[j] = temp;
			}
		}
	}

}

int main(){
	char list[] = { 'w', 'e', 'a', 'r', 'e', 's', 'm', 'a', 'r', 't' };
	cout << "Before sorting, the list elements are:" << endl;
	for (int i = 0; i<10; i++) {
		cout << list[i] << "  ";
	}
	cout << endl;
	bubbleSort(list, 10);// call to the bubbleSort function
	cout << "After sorting, the list elements are:" << endl;
	for (int i = 0; i<10; i++) {
		cout << list[i] << "  ";
	}
	cout << endl;
	return 0;
}

