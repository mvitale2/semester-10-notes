#include <string>
#include <iostream>
using namespace std;
#include "priorityList.h"

PriorityList::PriorityList() {

}

PriorityList::~PriorityList() {
	cout << "\n... Calling destructor ...\n";
	// Keep repeating until all elements have been deleted
	while (queue_front != NULL) {
		cout << "The element getting deleted is: " << queue_front->data << "\n";
		
		dequeue();
	}
}

void PriorityList::enqueue(string element, int priority) {

}

void PriorityList::dequeue() {

}


void PriorityList::print() {
	Node* temp = queue_front;

	cout << "\nThe front of the queue is: " << front() << "\n";;

	while (temp->next != NULL) {
		temp = temp->next;

		cout << "The next element is: " << temp->data << "\n";
	}

	cout << "Reached the end of the queue list!\n";
}