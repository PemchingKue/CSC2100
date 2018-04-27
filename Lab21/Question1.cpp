#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	node *next;
};

node *insertEnd(node *head){
	int data;
	cout << "Please enter the number: ";
	cin >> data;
	
	node *newNode = new node();
	newNode->data = data;
	newNode->next = NULL;
	
	if (head == NULL) {
		head = newNode;
	}
	else {
		node *temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}

	return newNode;
}
void printList(node *head){
	node *current = head;

	while (current != nullptr)
	{
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
	 
}
void showMenu(){
	cout << "1. Add a number in the end." << endl;
	cout << "2. Print list." << endl;
	cout << "3. Quit" << endl;
	cout << "Please enter a choice: ";
}

int main()
{
	node *head = NULL;
	int input;
	while (true) {
		showMenu();
		cin >> input;
		switch (input){
		case 1:
			head = insertEnd(head);
			break;
		case 2:
			printList(head);
			break;
		case 3: return 0;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
	return 0;
}
