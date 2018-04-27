#include<iostream>
#include<fstream>
using namespace std;

typedef struct node
{
	int data;
	node *next;
};

void insertPos(node *head){
	int num1;
	int num2;

	cout << "Please enter the number: ";
	cin >> num1;
	cout << "Please enter the number after which you want to insert : ";
	cin >> num2;

	node *newNode = new node;
	node *current = head;

	while (current != NULL){
		if (current->data == num2){
			newNode->data = num1;
			newNode->next = current->next;
			current->next = newNode;
		}
		current = current->next;
	}

	cout << "Number inserted into the list." << endl;
}
void deleteLast(node *head){
	if (head != NULL){
		node *last = head;
		if (last->next != NULL){
			node *prev_last;
			while (last->next != NULL){
				prev_last = last;
				last = last->next;
			}
			prev_last->next = NULL;
			delete last;
		}
		else {
			delete head;
			head = NULL;
		}
	}
	cout << "The last node has been deleted." << endl;
}
void frequency(node *head){
	int num;
	int count = 0;
	cout << "Please enter the number you want to count: ";
	cin >> num;

	node *current = head;

	while (current != NULL){
		if (current->data == num){
			count++;
		}
		current = current->next;
	}

	cout << "Frequency = " << count << endl;
}
void sort(node *head){
	node *i = head;
	node *j = head;

	while (i != NULL){
		while (j->next != NULL){
			if (j->data > j->next->data){
				int temp = j->data;
				j->data = j->next->data;
				j->next->data = temp;
			}
			j = j->next;
		}
		j = head;
		i = i->next;
	}
	cout << "The list is now sorted." << endl;
}
void printList(node *head){
	node *current = head;

	cout << "Linked List: ";
	while (current != NULL)
	{
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}
void showMenu(){
	cout << "1. Add a number in a particular postion." << endl;
	cout << "2. Delete the last element." << endl;
	cout << "3. Count a particular number." << endl;
	cout << "4. Sort the numbers." << endl;
	cout << "5. Print list." << endl;
	cout << "6. Quit" << endl;
	cout << "Please enter a choice: ";
}

node* insertEnd(node* head, int val) {
	node *n = new node;
	node *cursor;
	n->data = val;
	n->next = NULL;
	if (head == NULL) {
		return n;
	}
	for (cursor = head; cursor->next != NULL; cursor = cursor->next) {
		/* Do nothing, woo! */
	}
	cursor->next = n;
	return head;
}

int main()
{
	node *head = NULL;
	int input, val;

	ifstream fin;
	fin.open("input.txt");
	while (fin >> val)
		head = insertEnd(head, val);


	while (true) {
		showMenu();
		cin >> input;
		switch (input){
		case 1:
			insertPos(head);
			break;
		case 2:
			deleteLast(head);
			break;
		case 3:
			frequency(head);
			break;
		case 4: 
			sort(head);
			break;
		case 5: 
			printList(head);
			break;
		case 6: return 0;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
	return 0;
}