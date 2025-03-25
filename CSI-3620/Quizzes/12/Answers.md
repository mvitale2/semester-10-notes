# Question 1

| iteration | lower | upper | mid | comparison | action        |
| --------- | ----- | ----- | --- | ---------- | ------------- |
| 1         | 0     | 19    | 9   | 49 < 68    | lower = 9+1   |
| 2         | 10    | 19    | 14  | 73 > 68    | upper = 14-1  |
| 3         | 10    | 13    | 11  | 58 < 68    | lower = 11+1  |
| 4         | 12    | 13    | 12  | 62 > 68    | lower = 12 +1 |
| 5         | 13    | 13    | 13  | 68 == 68   | done          |
```embed-cpp
PATH: "vault://CSI-3620/cpp/binary_search.cpp"
```
# Question 2
O(log *n*)