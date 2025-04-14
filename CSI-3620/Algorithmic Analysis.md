# Improving Readability
Write comments so that people can understand what the heck you wrote. 
# Steps
```python
def print_numbers_version_one():
	number = 2
	while number <= 100:
		# If number is even, print it:
		if number % 2 == 0:
			print(number)
		number += 1
```
```python
def print_numbers_version_two():
	number = 2
	while number <= 100:
		print(number)
		number += 2
```
Version two is faster because it accomplishes the same task with less steps. 
## How to Measure Steps
- Read: looking for something at a particular spot
- Search: finding a value anywhere in the data structure
## Linear Search
```embed-cpp
PATH: "vault://CSI-3620/cpp/linear_search.cpp"
```
# Big-O Notation
Reading from an array is O(1). Reading from an array using linear search is O(n), where *n* is the number of elements in the array/data structure. Comparing one element of an array to every other element is O(n^2). 

```cpp
inline int min(int x, int y) {return x < y ? x : y}
```
This line of code is O(1). 

The order of growth:
- 1 is the most efficient
- log *n*
- *n* log *n*
- *n*^2 (generally associated with code that has two nested loops)
- *n*^3
- 2^n
## Binary Search & Big O
When performing binary search, the data structure **must** be ordered. The execution time of binary search is O(log *n*). 

Binary search works by eliminating one half of the array first. 

```embed-cpp
PATH: "vault://CSI-3620/cpp/binary_search.cpp"
```
# Sorting Unsorted Arrays
## Bubble Sort -- O($n^2$)
Works by comparing the 0th element and the 1st element. Depending on which is higher, swap their positions. Repeat.

After the first pass, the highest element is guaranteed to be at the top of the array.
 
1 passthrough means 1 pass through the entire array. 

For example: given 4, 2, 7, 1, 3
pass 1: 2, 4, 1, 3, 7
pass 2: 2, 1, 3, 4, 7
pass 3: 1, 2, 3, 4, 7
pass 4: 1, 2, 3, 4, 7
done!

![[Bubble-sort-example-300px.gif]]

```embed-cpp
PATH: "vault://CSI-3620/cpp/bubble_sort.cpp"
```
## Selection Sort -- O($n^2$)
Scan through the entire array and identify the lowest element. Swap the lowest element with the 0th index. Increment positional index. Repeat.

There will always be $n-1$ passthroughs. 

```embed-cpp
PATH: "vault://CSI-3620/cpp/selection_sort.cpp"
```
## Insertion Sort -- O($n^2$)
![[Insertion-sort-example-300px.gif]]

```embed-cpp
PATH: "vault://CSI-3620/cpp/insertion_sort.cpp"
```
# Math Mess
Let $f(n)$ and $g(n)$ be functions mapping positive integers to positive real numbers. We say that $f(n)$ is $O(g(n))$ if there is a real constant $c > 0$ and an integer constant $n_0 \geq 1$ such that:
$$
f(n) \leq cg(n), for(n \geq n_0)
$$

Essentially, this formula is asking: what is the most reasonable worst case?

- $f(n)$ is the algorithm's performance.
- $g(n)$ is the big O category of the algorithm.
- $c$ is a value that adjusts the upper bound of $g(n)$ to be slightly bigger than $f(n)$. 
- $n_0$ is the cutoff point where the Big O bound starts to apply. 
- The equation describes how efficient a searching algorithm is in comparison to another. 

![[Pasted image 20250414152112.png]]

## Big Ω
This math mess can be represented optimistically:
$$
f(n) \geq cg(n), for(n \geq n_0)
$$
## Big Θ (Theta)
$$
c'g(n) \leq f(n) \leq c''g(n), for(n \geq n_0)
$$
