1. `string& batman` does not identify which variable it's referencing.
2. Stack memory is local and easier to control. Heap memory has more memory available, but it's harder to use. Additionally, heap memory can be randomly accessed, while stack memory has to resolve each access in order. 
3. top -> bottom
   initial structure:
   3, 17, 8, 12
   final structure:
   4, 8, 12