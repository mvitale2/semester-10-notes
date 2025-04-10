#include <string>
#include <iostream>
#include "priorityList.h"
using namespace std;


int main() {
	// Create new queue
	PriorityList queue;

	// Add three elements to the queue, then print it
	queue.enqueue("Witcher 1", 8);
	queue.enqueue("Witcher 2", 10);
	queue.enqueue("Witcher 3", 2);
	queue.print();	
	cout << "There are " << queue.getSize() << " elements on the queue\n\n";

	// Remove an element, then print it
	queue.dequeue();
	queue.print();
	cout << "There are " << queue.getSize() << " elements on the queue\n\n";

	// Keep dequeueing to ensure the error message works correctly
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();
	cout << "There are " << queue.getSize() << " elements on the queue\n";
}