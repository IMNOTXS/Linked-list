#include <iostream>
using namespace std;
struct nodeType {
	int data;
	nodeType* link;
};
nodeType* first, * newNode, * print;
nodeType* buildlinkedBackwards();
void Ndelete(nodeType*);
void Ninsert(nodeType*);
void display(nodeType*);

void display(nodeType* first) {
	nodeType* print;
	print = first;
	while (print != nullptr) {
		cout << print->data << " ";
		print = print->link;
	}
}
nodeType* buildlinkedBackwards() {
	nodeType* first, * newNode;
	int num;
	cout << "enter a list of numbers then type -999 to exit" << endl;
	cin >> num;
	first = nullptr;
	while (num != -999)
	{
		newNode = new nodeType;
		newNode->data = num;
		newNode->link = first;
		first = newNode;
		cin >> num;
	}
	return first;
}
void Ndelete(nodeType*) {
	first = first->link;
}
void Ninsert(nodeType*) {
	int value;
	cout << "enter a new value to add it at the begining of the list " << endl;
	cin >> value;
	newNode = new nodeType;
	newNode->data = value;
	newNode->link = first;
	first = newNode;
}
int main() {
	first = new nodeType;
	first = buildlinkedBackwards();
	Ndelete(first);
	Ninsert(first);
	cout << "this is your linked list numbers -> :  ";
	display(first);
}
