// Heavily used https://www.programiz.com/dsa/linked-list-operations
#include <string>
#include <iostream>
#include "linked_list.h"
using namespace std;


int main() {
	LinkedList list;

	list.insertEnd("Flareon");
	list.insertEnd("Eevee");
	list.insertEnd("Geodude");
	list.insertEnd("Umbreon");
	list.insertEnd("Scolipede");

	int position = list.search("Geodude");

	if (position != -1) {
		cout << "Geodude is located at position " << position << endl;
	} else {
		cout << "Geodude was not found in the list." << endl;
	}
}