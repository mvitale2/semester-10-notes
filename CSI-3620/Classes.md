Classes consist of members. Members can be variables, constants, functions, or methods (methods always have a return type of `void`). 

Three things are required for C++ classes:
- Main C++ file (where the classes will be instantiated)
- C++ file that defines the class
- C++ header file that declares the class(es)
# Preventing Multiple Expansions
When the header file is imported, it becomes expanded each time. This can cause memory problems on low-power machines. To prevent this from happening, include this code in the header file:
```c++
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
//...
#endif
```
The defined variable does not need to match the name of the file. What happens in this code:
1. Check if the VARIABLE is undefined
2. If so, create the variable
3. End the if statement

Implementing this will ensure there is only one header file that each file can refer to if it is imported. 
# Public, Private, & Protected
- Public: accessible from anywhere
- Private: accessible only within the class
- Protected: accessible only within the class and within subclasses
