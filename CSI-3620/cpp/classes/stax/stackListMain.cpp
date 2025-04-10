#include <string>
#include <iostream>
#include "stackList.h"
using namespace std;


int main() {
	// Create new stack
	StackList stack;

	// Add three elements to the stack, then print it
	stack.push("Witcher 1");
	stack.push("Witcher 2");
	stack.push("Witcher 3");
	stack.print();	
	cout << "The head of the stack is: " << stack.top() << "\n";
	cout << "There are " << stack.getSize() << " elements on the stack\n\n";

	// Remove an element, then print it
	stack.pop();
	stack.print();
	cout << "The head of the stack is: " << stack.top() << "\n";
	cout << "There are " << stack.getSize() << " elements on the stack\n\n";

	// Keep popping to ensure the error message works correctly
	stack.pop();
	stack.pop();
	stack.pop();
	cout << "There are " << stack.getSize() << " elements on the stack\n";
}