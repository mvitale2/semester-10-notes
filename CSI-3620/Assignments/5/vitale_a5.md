# Question 1
The ability of an object to behave differently in different contexts. For example, an overloaded function can use different parameters with different data types. 
# Question 2
Static binding means that if a function inside a subclass has the same name as a function inside the parent class, then only the parent function will be called. If the subclass calls that function, then it will call the parent's version of it instead.

Dynamic binding allows for function overloading, in a sense. By declaring the function as `virtual` in both the parent and child classes, the respective function for each class will be called. 
# Question 3
The child's destructor is called first. 
# Question 4
Big O notation measures the amount of steps it takes for a program to execute. This method is much better than other metrics since it does not depend on the machine's effectiveness. Measuring execution time or memory usage will be influenced by the machine's hardware, which will lead to inaccurate results for solely execution efficiency. 
# Question 5
Big O notation for reading an element from an array is O(1).
# Question 6
The time complexity of linear search is O(*n*). The worst case scenario is that the item is the last one in the array, or it doesn't exist at all.
# Question 7
The orders of growth from the most efficient to the least efficient are:
- O(1) - Constant Time 
- O(log n) - Logarithmic Time
- O(n) - Linear Time 
- O(n log n) - Log-linear Time
- O(n^2) - Quadratic Time
- O(2^n) - Exponential Time
- O(n!) - Factorial Time
# Question 8
Big O notation of binary search is O (log *n*). This is because as the data structure's size increases, the time it takes for the search to execute does not increase. 
# Question 9
Linear search will always be more efficient than binary search if the element being searched for is the first element. In cases like that, it takes linear search 1 step instead of binary search's 2. Also, data structures must be ordered for binary search to work. Linear search is better for unordered data structures. 
# Question 10
Arrays must be ordered to be able to execute binary search. It doesn't matter how arrays are ordered for linear search. 
# Question 11
The error is in the line `return false;`. If the element is not equal to `list[i]`, then the function will end immediately. It should be a `continue` statement. `return false` Should be outside of the for loop in case it ends without finding the desired element. 
# Question 12
