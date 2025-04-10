#include <string>
#include <iostream>
using namespace std;

// Create node to be used in StackList data structure
class Node {
	public:
		// What the node actually contains
		string data;
		// Pointer to the next node
		Node* next;
};

// Create linked list data structure
class StackList {
	public:
		// Create empty stack list
		StackList();
		~StackList();	// Need destructor because we're using heap memory

		// Insert element at top of stack
		void push(string element);

		// Remove an element at top of stack
		void pop();

		// Return a reference to the top element on the stack without removing it
		string top() { return stack_top->data; };

		// Return the number of elements in the stack
		int getSize() { return size; };

		// Return true if the stack is empty and false otherwise
		bool isEmpty() { return ((size == 0) ? true : false); };

		// Prints the contents of the entire stack list
		void print();
	
	// The only private element is the first node
	private:
		Node* stack_top;
		int size;
};
