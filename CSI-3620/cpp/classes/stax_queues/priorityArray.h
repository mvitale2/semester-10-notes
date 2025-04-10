#include <string>
#include <iostream>
using namespace std;

// Create array-based queue data structure
class PriorityArray {
	public:
		// Create empty queue
		// Don't need destructor because we're not using heap memory
		PriorityArray();
		
		// Add a new element to the end queue
		void enqueue(string element, int priority);

		// Removes an element from front the queue
		// Could also make this function string to return the popped element
		void dequeue();

		// Returns a reference to the front element in the queue without removing it
		int front();

		// Return the number of elements in the queue
		int getSize() { return size; };

		// Return true if the queue is empty and false otherwise
		bool isEmpty() { return ((size == 0) ? true : false); };

		// Print the contents of the queue
		void print();

	
	private:
		
};
