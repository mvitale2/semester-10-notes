#include <string>
#include <iostream>
using namespace std;

// Create node to be used in QueueList data structure
class Node {
	public:
		// What the node actually contains
		string data;
		int priority;
		// Pointer to the next node
		Node* next;
};

// Create queue list data structure
class PriorityList {
	public:
		// Create empty queue list
		PriorityList();
		~PriorityList();	// Need destructor because we're using heap memory

		// Insert element at end of queue
		void enqueue(string element, int priority);

		// Remove an element at front of queue
		void dequeue();

		// Return a reference to the top element on the queue without removing it
		string front() {  };

		// Return the number of elements in the queue
		int getSize() { return size; };

		// Return true if the queue is empty and false otherwise
		bool isEmpty() {return ((size == 0) ? true : false); };

		// Prints the contents of the entire queue list
		void print();
	
	private:
		
};
