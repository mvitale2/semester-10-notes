Includes the terms base class, parent class, and superclass. 

Specific classes that inherit everything from a generic class and then add more details are called:
Derived class, child class, or subclass. 

```c++
class Person {
	private:
		string name;
		string idNum;
	public:
		void print();
		string getName();
}

class Student : public Person {
	private:
		string major;
		int gradYear;
	public:
		void print();
		void changeMajor(const string& newMajor);
}
```