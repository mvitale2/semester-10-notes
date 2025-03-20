1. Polymorphism is the ability of a variable/object to behave differently in different contexts. 
2. The Person destructor will be called before the Student destructor.  The Person destructor will be called again since Student is a subclass of Person. 
3. The Person print function will be called with static binding. 
4. The Student print function will be called with dynamic binding. 
5. Add `virtual` in front of the data type of the function in both the Person class and Student class. 