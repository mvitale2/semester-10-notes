#include <string>
#include <iostream>
using namespace std;
#include "queueList.h"

QueueList::QueueList() {
	queue_front = NULL;
	queue_end = NULL;
	size = 0;
}

QueueList::~QueueList() {
	cout << "\n... Calling destructor ...\n";
	// Keep repeating until all elements have been deleted
	while (queue_front != NULL) {
		cout << "The element getting deleted is: " << queue_front->data << "\n";
		
		dequeue();
	}
}

void QueueList::enqueue(string element) {
	Node* newNode = new Node();
	newNode->data = element;
	newNode->next = NULL;

	if (size == 0) {
		queue_front = newNode;
		queue_end = newNode;
	} else {
		queue_end->next = newNode;
		queue_end = newNode;
	}
}

void QueueList::dequeue() {
	if(!isEmpty()) {
		Node* old = queue_front;
		queue_front =  old->next;
		delete old;
		size--;

		if (size == 0)
			queue_end = NULL;
	} else {
		cout << "Error, could not dequeue, queue is empty\n";
	}
}

void QueueList::print() {
	Node* temp = queue_front;

	cout << "\nThe front of the queue is: " << front() << "\n";;

	while (temp->next != NULL) {
		temp = temp->next;

		cout << "The next element is: " << temp->data << "\n";
	}

	cout << "Reached the end of the queue list!\n";
}