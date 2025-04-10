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

// Need destructor to delete every node, since the node
//  class uses the heap
LinkedList::~LinkedList() {
    while (head != NULL) {
        // cout << "The element being deleted is " << head->data << endl;
        removeStart();
    }
}

// // Insert new element at the head of the linked list
void LinkedList::insertStart(string element) {
	// create new node based on received info
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

// // Remove head of linked list and shift to the next element
void LinkedList::removeStart() {
	Node* old = head;
    head = old->next;
    delete old;
    size--;
}

// void LinkedList::removeEnd() {
	
// }

// void LinkedList::removePos(int position) {

	
// }

// void LinkedList::removeElement(string element) {
	
// }

int LinkedList::search(string element) {
    // set the starting node to head
    Node* tempNode = head;

    int position = 0;

    // If head is empty, then loop won't start
    while (tempNode != NULL) {
        // if the data is equal to the desired element, return the position number
        if (tempNode->data == element) {
            return position;
        }
        // else, iterate
        tempNode = tempNode->next;
        position++;
    }
    // return an impossible position to show that the element wasn't found
    cout << element << " does not exist in the list!" << endl;
    return(-1);
}

void LinkedList::read(int position) {
    if (position < 0 || position > size+1) {
        cout << "Invalid position!";
        return;
    }
    
    Node* tempNode = head;

    for (int i=0; i<position; i++) {
        tempNode = tempNode->next;
    }

    cout << "The element is at position " << position << endl;
}

void LinkedList::print() {
	// create our temporary node to traverse the list
    Node* tempNode = head;
    cout << "\nThe head node is: " << tempNode->data << endl;
    
    while (tempNode->next != NULL) {
        tempNode = tempNode->next;

        cout << "The next node is: " << tempNode->data << endl;
    }

    cout << "Reached the end of the linked list\n" << endl;

    delete tempNode;
}