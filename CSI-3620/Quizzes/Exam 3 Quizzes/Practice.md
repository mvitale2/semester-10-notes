# Quiz 3-13
## Question 1
Public means the variable can be accessed or modified outside of the class's scope. (It can be accessed using the respective attribute through the class object.)
Private means the variable/method can only be accessed or modified inside the class's scope. (Calling the attribute will not work, and it can't be inherited.)
Protected means the variable/method can only be accessed or modified inside of the parent and any child class' scope. (The class member can be used inside the parent and any child class, but not through the class object.)
## Question 2
The error is in the main function. It's not possible to print the `bankAcct` variable since it's protected and can only be accessed within the scope of the parent and child classes. 

Also can't use changeMajor function with the Person class. 
# Quiz 3-18
## Question 1
Big O notation measures how many steps it takes for a program to execute. (It measures an algorithm's efficiency in worst-case terms.)
## Question 2
O(1) - constant time
## Question 3
O(*n*)
## Question 4
The second version of the function will run faster. 

The first version takes 5 steps and the second one takes 4. 
# Quiz 3-20
## Question 1
Polymorphism is the ability of a variable, function, class object, etc. to behave differently based on certain contexts. 
## Question 2
1. Person destructor
2. Student destructor
3. Person destructor
## Question 3
The person class's print function will be called. 

The student class's print function will be called using dynamic binding. 

To specify dynamic binding, you include the `virtual` keyword in front of the function declaration in both the parent and child header files. 
# Quiz 3-25
## Question 1

| Iteration | Lower | Upper | Mid | Comparison | Action         |
| --------- | ----- | ----- | --- | ---------- | -------------- |
| 1         | 0     | 19    | 9   | 49 < 68    | lower = 9 + 1  |
| 2         | 10    | 19    | 15  | 68 < 73    | upper = 15 - 1 |
| 3         | 10    | 14    | 12  | 62 < 68    | lower = 12 + 1 |
| 4         | 13    | 14    | 14  | 68 < 73    | upper = 14 - 1 |
| 5         | 13    | 13    | 13  | 68 == 68   | done!          |
## Question 2
O(log *n*) (the log is log base 2)

