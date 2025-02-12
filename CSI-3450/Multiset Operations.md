A multiset is a set that allows duplicate elements. SQL tables act like multisets since rows and columns can be duplicated, unless they are defined as a primary key or unique. 
# SQL Examples

```sql
SELECT R.A FROM R, S 
WHERE R.A = S.A 
INTERSECT 
SELECT R.A 
FROM R, T 
WHERE R.A = T.A;
```
```sql
SELECT R.A 
FROM R, S 
WHERE R.A=S.A 
UNION 
SELECT R.A 
FROM R, T 
WHERE R.A = T.A;
```
```SQL
SELECT R.A
FROM R, S
WHERE R.A=S.A
EXCEPT
SELECT R.A
FROM R, T
WHERE R.A = T.A;
```
ALL indicates multiset operations
```sql
SELECT R.A
FROM R,S
WHERE R.A = S.A
UNION ALL
SELECT R.A
FROM R, T
WHERE R.A = T.A
```
