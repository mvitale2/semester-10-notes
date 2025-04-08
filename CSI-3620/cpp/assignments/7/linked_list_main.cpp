// Heavily used https://www.programiz.com/dsa/linked-list-operations
#include <string>
#include <iostream>
#include "linked_list.h"
using namespace std;


int main() {
	LinkedList list;

	list.insertStart("James Holden");
	list.insertEnd("Amos Burton");
	list.insertEnd("Naomi Nagata");
	list.insertEnd("Alex Kamal");
	list.print();

	list.insertPos("Clarissa Mao", 2);
	list.print();

	list.removeElement("Clarissa Mao");
	list.print();

	list.insertEnd("Bobbie Draper");
	list.print();

	list.removePos(4);
	list.print();

	LinkedList emptyList;

	emptyList.removeEnd();
	emptyList.insertStart("wombo");
	emptyList.print();
	emptyList.removeStart();
}