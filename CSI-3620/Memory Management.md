# Memory in C++
Step-by-step process of how C handles computer memory:
1. Compiled program is loaded into memory.
2. Global variables are stored during the entire life of the program.
3. Stack: Local variables remain in computer memory as long as the function continues, but as soon as the function exits, the info is erased from the stack.
4. Heap: larger amount of memory available than the stack, which allows programmers to [[#Dynamic Memory Allocation (DMA)|dynamically allocate memory]]. 

Both the heap and the stack use RAM!
## Stack memory
Stacks follow a last-in, first-out methodology. The last item added to the stack is the first one that is removed. 
### Function call stack
Calling 30 nested functions is great way to exceed the function call stack limit. 
## Heap Memory
A heap memory variable MUST be a [[Pointers|pointer]], and you have to use the keyword `new` when declaring it. Finally, this variable must be terminated with the `delete` keyword before the function ends. 
## Memory Management Example
```embed-cpp
PATH: "vault://CSI-3620/cpp/intro_dma.cpp"
```
# Dynamic Memory Allocation (DMA)
It's possible to dynamically allocate [[arrays]] on the heap. 
## Example
```embed-cpp
PATH: "vault://CSI-3620/cpp/dma_array.cpp"
```