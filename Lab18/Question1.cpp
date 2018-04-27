#include <iostream>
#include <string>
using namespace std;

int freq(string str, int idx, char n){

		if (str[idx] == n){
			return true;
		}
		else{
			return freq(str, idx + 1, n);
		}

}

int main(){

	string input;
	char key;
	int length = 0;

	cout << "Please input a string: ";
	getline(cin, input);

	cout << "Please input a character to count: ";
	cin >> key;

	cout << key << " occurs " << freq(input, length, key) << " times in a string of characters" << endl;
}