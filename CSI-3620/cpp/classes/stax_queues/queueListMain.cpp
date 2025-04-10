#include <string>
#include <iostream>
#include "queueList.h"
using namespace std;


int main() {
	// Create new queue
	QueueList queue;

	// Add three elements to the queue, then print it
	queue.enqueue("Witcher 1");
	queue.enqueue("Witcher 2");
	queue.enqueue("Witcher 3");
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