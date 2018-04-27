#include <iostream>
#include <string>

using namespace std;
#define ASIZE 4

void insertionSort(int vote[], string name[], int listLength)
{
	int j;
	int temp;
	string temp2;

	for (int i = 0; i < listLength; i++){
		
		j = i;

		while (j > 0 && vote[j] < vote[j - 1]){
			temp = vote[j];
			temp2 = name[j];
			vote[j] = vote[j - 1];
			name[j] = name[j - 1];
			vote[j - 1] = temp;
			name[j - 1] = temp2;
			j--;
		}
	}
}

string binarySearch(const int vote[], const string name[], int listLength, int searchItem)
{
	int first = 0;
	int last = listLength - 1;
	int middle;
	int position = -1;
	bool found = false;	

	while (!found && first <= last){
		middle = (first + last) / 2; 	// Calculate midpoint
		if (vote[middle] == searchItem)		// If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (vote[middle] > searchItem) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;			// If value is in upper half
	}

	if (position == -1){
		return "There is no candidate with the inputted votes!";
	}
	else{
		return "The candidate was found!";
	}
}
int main() {

	string name[ASIZE];
	int vote[ASIZE];

	for (int i = 0; i<ASIZE; i++){
		cout << "Please input candidate " << i + 1 << " name: " << endl;
		cin >> name[i];

		cout << "Please input candidate " << i + 1 << " votes: " << endl;
		cin >> vote[i];
	}

	insertionSort(vote, name, ASIZE);
	cout << "Candidate\t" << "Votes Received\t" << endl;

	for (int i = 0; i<ASIZE; i++){
		cout << name[i] << "\t\t" << vote[i] << endl;
	}

	cout << "The winner of the election is " << name[ASIZE - 1] << endl;

	cout << "Please enter the vote number to be searched?\n";
	int x;
	cin >> x;
	cout << binarySearch(vote, name, ASIZE, x) << endl;
	return 0;
}
