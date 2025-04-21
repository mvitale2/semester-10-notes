// Prevent multiple header expansion
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {

	private:
		string name;
		string idNum;

	protected:
		int bankAcct;

	public:
		Person(const string& newName, const string& id, const int& bank);
		void print();
		string getName();
};
#endif