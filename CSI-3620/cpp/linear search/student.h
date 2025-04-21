#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include <string>
using namespace std;

class Student : public Person {

	private:
		string major;
		int gradyear;

	public:
		Student(const string& newName, const string& id, const int& bank,
				const string& newMajor, const int& year);
		void print();
		void changeMajor(const string& newMajor);
};
#endif