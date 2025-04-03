# Arrays vs Linked Lists
## Arrays
- Need to allocate one large block in memory
- Can't change size
- Inserting/deleting elements is hard
- Shifting is also hard
- Lookup is fast
## Linked Lists
- No limits on how memory is organized
- No limits on size
- Inserting/deleting elements is easy
- Shifting is also easy
- Lookup takes a while

```embed-cpp
PATH: "vault://CSI-3620/cpp/linked_list_simple.cpp"
```

# Efficiency of Linked Lists
- Read an element: O(n)
- Search for an element: O(n)
- Inserting/deleting an element: ?
	- If it's the start of the list: O(1)
	- If we specify the position, or it's the end: O(n)