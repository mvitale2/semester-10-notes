#include <string>
#include <iostream>
#include "priorityArray.h"
using namespace std;

int main() {
	// Create new queue
	PriorityArray queue;

	// Add three elements to the queue, then print it
	queue.enqueue("Witcher 1", 8);
	queue.print();
	queue.enqueue("Witcher 2", 6);
	queue.print();
	queue.enqueue("Witcher 3", 10);
	queue.print();	
	cout << "The head of the queue is: " << queue[queue.front()] << "\n";
	cout << "There are " << queue.getSize() << " elements in the queue\n\n";

	// Remove an element, then print it
	queue.dequeue();
	queue.print();
	cout << "The head of the queue is: " << queue[queue.front()] << "\n";
	cout << "There are " << queue.getSize() << " elements in the queue\n\n";

	// Keep dequeueing to ensure the error message works correctly
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();
	cout << "There are " << queue.getSize() << " elements in the queue\n";

}