// Heavily used https://www.programiz.com/dsa/linked-list-operations
#include <string>
#include <iostream>
#include "linked_list.h"
using namespace std;


int main() {
	LinkedList list;

	// list.insertEnd("Charmander");
	// list.insertEnd("Squirtle");
	// list.insertEnd("Bulbasaur");

	list.insertStart("Wombo");
	list.insertStart("Combo");
	list.insertStart("Jombo");
	list.insertStart("Snorlax");

	list.print();

	list.removeStart();
	list.print();

	// list.insertStart("The Fellowship of the Ring");
	// list.insertPos("The Two Towers", 2);
	// list.insertEnd("The Return of the King");

	// list.print();

	// list.insertPos("The Hobbit", 2);

	// list.print();

	// list.removeEnd();

	// list.print();

	// list.removePos(2);

	// list.print();

	// cout << "Item found at " << list.search("The Return of the King") << "\n";

	// list.read(2);
}