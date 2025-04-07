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
	// list.print();

	list.insertStart("Mew");
	list.insertStart("Pikachu");
	list.insertStart("Jigglypuff");
	list.insertStart("Snorlax");
	list.print();
	
	list.removeStart();
	list.print();

	list.removeEnd();
	list.print();
}