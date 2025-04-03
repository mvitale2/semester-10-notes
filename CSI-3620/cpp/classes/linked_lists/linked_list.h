// Heavily used https://www.programiz.com/dsa/linked-list-operations

#include <string>
#include <iostream>
using namespace std;

// Create node to be used in LinkedList data structure
class Node {
	public:
        string data;
        Node* next;
};

// Create linked list data structure
class LinkedList {
	public:
		// Create empty linked list
		LinkedList();
		// ~LinkedList();
		// // Insert element at head of list
		void insertStart(string element);
		// void insertEnd(string element);
		// void insertPos(string element, int position);
		// // Remove a specific element that matches the value
		// void removeElement(string element);
		// // Remove an element starting at the head
		void removeStart();
		// void removeEnd();
		// void removePos(int position);
		// // Read the value of an element at the provided position
		// void read(int position);
		// // Return the position where an element is found
		// // If not found, the position value is -1
		// int search(string element);
		// // Prints the contents of the entire linked list
		void print();
	
	// The only private element is the first node
	private:
		Node* head;
        int size;
};
