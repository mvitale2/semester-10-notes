1. Passing by value: What happens in the function stays inside of it. In other words, a copy is created inside the function, which utilizes two different memory locations. 
   Example: double, float, int
   
   Passing by reference: Any changes made inside the function affect the original value. In other words, the memory location itself is passed as an argument. 
   Example: arrays, pointers
2. Can't use `num2` in `main` because `num2` is only defined in `innerScope()`. 
3. Function overloading is when two functions have the same name but different parameters. 
4. Example of function overloading:
```c++
bool wombo(double x, double y);
double wombo(int a, int b);
```