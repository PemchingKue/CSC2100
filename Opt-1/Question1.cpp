#include <iostream>
using namespace std;
#define LEN 127
void stringManipulator(char *s){
	for (int i = 0; i < strlen(s); i++){
		cout << *s;
		*s++;
		cout << char(toupper(*s));
		*s++;
	}
	cout << endl;
}

size_t strlen(char *s){
	return *s;
}

char toupper(char s){
	return toupper(s);
}

char tolower(char s){
	return tolower(s);
}

int main(){

	char* str;
	str = new char[LEN];

	cout << "Provide an input to string: ";
	cin.getline(str, LEN);

	stringManipulator(str);

	delete[] str;

	return 0;
}