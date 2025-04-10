#include <string>
#include <iostream>
using namespace std;
#include "stackList.h"


StackList::StackList() {
	stack_top = NULL;
	size = 0;
}

StackList::~StackList() {
	cout << "\n... Calling destructor...\n";

	while (stack_top != NULL) {
		cout << "The element getting deleting is: " << stack_top->data << endl;

		pop();
	}
}


void StackList::push(string element) {
	Node* newNode = new Node();
	newNode->data = element;
	newNode->next = stack_top;

	stack_top = newNode;
	size++;
}

void StackList::pop() {
	if (!isEmpty()) {
		Node* old = stack_top;
		stack_top = old->next;
		delete old;
		size--;
	}
	else
		cout << "Error, could not pop; stack is empty\n";
	
}


void StackList::print() {
	// It's bad practice to print the contents of the stack
	Node* temp = stack_top;
	cout << "\nThe top of the stack is: " << temp->data << endl;

	while (temp->next != NULL) {
		temp = temp->next;
		cout << "The next element is: " << temp->data << endl;
	}

	cout << "Reached the end of the stack list!" << endl;
}