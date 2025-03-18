Polymorphism literally means "many forms". Technically, in the context of C, it means the ability of an object to behave differently in different contexts. For example, an overloaded function can use different parameters with different data types. 

A pointer variable that points to a class object with at least one virtual function is polymorphic. 

A variable declared to be a pointer to a superclass implies that the pointer can refer to any subclass. 
# Static Binding
When determining which member function to call, C++'s default action is to consider an object's declared type, not its actual type. 
```c++
Person* pp[100]
pp[0] = new Person()
pp[1]= new Student()

pp[1]->changeMajor("English") // throws an error
```
# Dynamic Binding
Declare a method as virtual to make it dynamic.
```c++
virtual void print();
```
# Polymorphism in C++
```embed-cpp
PATH: "vault://CSI-3620/cpp/classes/inheritance/main.cpp"
```
