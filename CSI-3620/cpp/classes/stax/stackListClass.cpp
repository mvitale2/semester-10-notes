#include <string>
#include <iostream>
using namespace std;
#include "stackList.h"


StackList::StackList() {
	stack_top = NULL;
    size = 0;
}

StackList::~StackList() {
	
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
    } else {
        cout << "The stack is empty!" << endl;
    }
}


void StackList::print() {
	
}