#include <string>
#include <iostream>
using namespace std;
#include "queueArray.h"

ArrayQueue::ArrayQueue() {
    queue_front = 0;
    queue_end = 0;
    size = 0;
}

void ArrayQueue::enqueue(string element) {
    if (size == MAX_QUEUE_SIZE) {
        cout << "Error, cannot add to queue, queue is full" << endl;
    } else if (size == 0) {
        array_queue[queue_end--] = element;

        if (queue_end == -1)
            queue_end = MAX_QUEUE_SIZE - 1;
        
        size++;
    }
}

void ArrayQueue::dequeue() {

}


void ArrayQueue::print() {

}

