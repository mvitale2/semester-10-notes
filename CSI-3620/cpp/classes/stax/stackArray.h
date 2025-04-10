#include <string>
#include <iostream>
using namespace std;

// Create linked list data structure
class ArrayStack {
	public:
		// Create empty linked list
		// Don't need destructor because we're not using heap memory
		ArrayStack();
		
		// Add a new element to the stack
		void push(string element) {  };

		// Removes an element from the stack
		// Could also make this function string to return the popped element
		void pop();

		// Returns a reference to the top element on the stack without removing it
		string top() {  };

		// Return the number of elements in the stack
		int getSize() {  };

		// Return true if the stack is empty and false otherwise
		bool isEmpty() {  };

		// Print the contents of the stack
		void print();

	
	// The only private element is the first node
	private:
		// Stores the index of the top of the stack
		// Here, the index can also be used to keep track of the size
		int stack_top;

		// Keep track of the max size of array
		// Static means that the variable will always stay alive for the duration of the program
		static const int MAX_STACK_SIZE = 10;
		string array_stack[MAX_STACK_SIZE];
};
