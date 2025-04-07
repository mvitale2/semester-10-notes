// Heavily used https://www.programiz.com/dsa/linked-list-operations

#include <string>
#include <iostream>
using namespace std;
#include "linked_list.h"

// When linked list is originally created, the head
//  doesn't point to anything
LinkedList::LinkedList() {
	head = NULL;
	size = 0;
}

// // Need destructor to delete every node, since the node
// //  class uses the heap
// LinkedList::~LinkedList() {
	
// }

// Insert new element at the head of the linked list
void LinkedList::insertStart(string element) {
	// Create our new node based on the info we received
	Node* newNode = new Node();
	newNode->data = element;
	newNode->next = head;

	head = newNode;
	size++;
}

// Insert new element at the tail of the linked list
void LinkedList::insertEnd(string element) {
	// First create a node class object with the new element info
	Node* newNode = new Node();
	// New node's data is the info we received from main
	newNode->data = element;
	// Our next should be NULL because we're inserting at the end
	// i.e., no nodes come after it 
	newNode->next = NULL;

	// Now we need to traverse our linked list to insert it at the end
	// At this point, our new node is just floating in memory
	if (head != NULL) {
		// Create a temporary node to traverse our linked list	
		// Kind of like int i=0 to traverse an array in a for loop
		Node* tempNode = head;

		// Traverse our list until tempNode is equal to the last node
		while (tempNode->next != NULL) {
			// Similar to i = i+1;
			tempNode = tempNode->next;
		}

		// If we get to this point, then our tempNode next field is equal to null
		// Attach the new Node to our list
		tempNode->next = newNode;
	}
	// If our linked list is empty, then just make head equal to our new node
	else {
		head = newNode;
	}

	// Technically not allowed but I'm feeling rebellious today
	size++;
}

// void LinkedList::insertPos(string element, int position) {

// }

// Remove head of linked list and shift to the next element
void LinkedList::removeStart() {
	Node* old = head;
	head = old->next;
	delete old;

	// Can, but shouldn't do this
	// Because then we have the old head node just hanging out in memory
	// Be responsible and return your library book
	// head = head->next;

	// If you want to watch the world burn:
	// delete head;
	// This will cause you to lose your entire linked list! 

	size--;
}

void LinkedList::removeEnd() {
	// Create temp node to traverse list until you reach the end
	Node* tempNode = head;

	while (tempNode->next->next != NULL) {
		tempNode = tempNode->next;
	}

	tempNode->next = NULL;

	size--;
}

// void LinkedList::removePos(int position) {

	
// }

// void LinkedList::removeElement(string element) {
	
// }

// int LinkedList::search(string element) {
	
// }

// void LinkedList::read(int position) {
	
// }

// Print the contents of each node in the linked list
void LinkedList::print() {
	// Create our temporary node to traverse the list
	// Again, kind of like int i=0 to traverse an array
	Node* tempNode = head;

	cout << "\nThe head node is: " << tempNode->data << endl;

	while (tempNode->next != NULL) {
		tempNode = tempNode->next;

		// Print the contents of the next node
		cout << "The next node is: " << tempNode->data << endl;
	}

	cout << "Reached the end of the linked list!\n";
}








