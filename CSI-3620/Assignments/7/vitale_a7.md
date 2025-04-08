# Part 1
## Question 1
- Pass 1: {60, 82, 77, 84, 55, 85, 87, 90, 93, 94}
- Pass 2: {60, 77, 82, 55, 84, 85, 87, 90, 93, 94}
- Pass 3: {60, 77, 55, 82, 84, 85, 87, 90, 93, 94}
- Pass 4: {60, 55, 77, 82, 84, 85, 87, 90, 93, 94}
- Pass 5: {55, 60, 77, 82, 84, 85, 87, 90, 93, 94}
- Pass 6: {55, 60, 77, 82, 84, 85, 87, 90, 93, 94}
## Question 2
The last two passthroughs are identical because with bubble sort, there is no way to universally tell if the array is sorted. The algorithm needs to read the entire array in order to determine if it's sorted. It can tell if it makes no swaps. 
## Question 3
The worst case scenario is generally O($n^2$) for search algorithms. In this case, there would be $10^2$ passthroughs if the array were sorted in descending order. 
## Question 4
- Pass 1: {**55**, 60, 87, 82, 93, 77, 84, 85, 90, 94}
- Pass 2: {**55, 60**, 87, 82, 93, 77, 84, 85, 90, 94}
- Pass 3: {**55, 60, 77**, 87, 82, 93, 84, 85, 90, 94}
- Pass 4: {**55, 60, 77, 82**, 87, 93, 84, 85, 90, 94}
- Pass 5: {**55, 60, 77, 82, 84**, 87, 93, 85, 90, 94}
- Pass 6: {**55, 60, 77, 82, 84, 85**, 87, 93, 90, 94}
- Pass 7: {**55, 60, 77, 82, 84, 85, 87**, 93, 90, 94}
- Pass 8: {**55, 60, 77, 82, 84, 85, 87, 90**, 93, 94}
- Pass 9: {**55, 60, 77, 82, 84, 85, 87, 90, 93, 94**}
## Question 5
There would be $10^2$ passthroughs. 
## Question 6
- Pass 1: {60, 82, 87, 77, 84, 55, 85, 90, 93, 94}
- Pass 2: {60, 77, 82, 87, 84, 55, 85, 90, 93, 94}
- Pass 3: {60, 77, 82, 84, 87, 55, 85, 90, 93, 94}
- Pass 4: {55, 60, 77, 82, 84, 87, 85, 90, 93, 94}
- Pass 5: {55, 60, 77, 82, 84, 85, 87, 93, 90, 94}
- Pass 6: {55, 60, 77, 82, 84, 85, 87, 90, 93, 94}
## Question 7
There would be O($10^2$) passthroughs. 
## Question 8
1. O($n^2$)
2. O($n^2$)
3. O($n^2$)
4. O($1$)
5. O($n$)
6. O($n$)
7. O($n$)
8. O($1$)
9. O($1$)
10. O($n$)
11. O($n$)
12. O($1$)
13. O($1$)
14. O($n$)
15. O($n$)
