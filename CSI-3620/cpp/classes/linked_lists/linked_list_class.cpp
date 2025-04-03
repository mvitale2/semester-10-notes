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
// LinkedList::~LinkedList() {
	
// }

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
// void LinkedList::insertEnd(string element) {
// 	Node* newNode = new Node();
//     newNode->data = element;
//     newNode->next = NULL;
    
    
//     if (head != NULL) {
//         Node* tempNode = head;
//         while (tempNode->next != NULL) {
//             // similar to i = i+1
//             tempNode = tempNode->next;
//         }

//         tempNode->next = newNode;
//     }
//     else {

//     }

//     // if we get to this point, then our tempNode is equal to null
//     size++;

//     delete tempNode;
// }

// void LinkedList::insertPos(string element, int position) {

// }

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

// int LinkedList::search(string element) {
	
// }

// void LinkedList::read(int position) {
	
// }

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