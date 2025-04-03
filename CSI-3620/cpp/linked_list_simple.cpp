// Filename: linked_list_simple.cpp

#include <stdio.h>
#include <string>
using namespace std;

class Node {
    public:
        // What the node contains
        string data;
        // Pointer to the next node
        Node* next;
};

int main() {
	// Allocate 3 nodes using heap memory
    Node* head = new Node();
    Node* middle = new Node();
    Node* tail = new Node();

    // Start defining each node
    head->data = "The Fellowship of the Ring";
    middle->data = "The Two Towers";
    tail->data = "The Return of the King";

    // They're just scattered in memory rn, so we have to define the next node
    head->next = middle;
    middle->next = tail;
    tail->next = NULL;

    printf("The head of the linked list is: %s\n", head->data.c_str());
    printf("The middle of the linked list is: %s\n", head->next->data.c_str());
    printf("The tail of the linked list is: %s\n", head->next->next->data.c_str()); 

    delete head;
    delete middle;
    delete tail;
}