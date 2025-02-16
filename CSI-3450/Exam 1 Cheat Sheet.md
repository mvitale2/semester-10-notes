| Symbol | Meaning           |
| ------ | ----------------- |
| σ      | Selection (sigma) |
| π      | Projection (pi)   |
| ⨝      | Natural Join      |
| ⋈      | Inner Join        |
| ⟕      | Left Outer Join   |
| ⟖      | Right Outer Join  |
| ⟗      | Full Outer Join   |
| ∪      | Union             |
| ∩      | Intersection      |
| −      | Difference        |
| ×      | Cartesian Product |
##### Converting SQL to Relational Algebra
###### SQL
```sql
SELECT R.A, S.D
FROM R, S, T
WHERE R.B = S.B
AND S.C = T.C
AND R.A < 10;
```
###### RA
$πA,D(σA<10(T⋈(R⋈S)))$
##### Joins
- **Inner joins** return only the records that have matching values in both tables.
- **Left Outer Joins** return all records from the left table and matching records from the right table. 
- **Right outer joins** return all records from the right table and matching records from the left table. 
- **Full outer joins** return all records when there is a match in either table.
- **Cross joins** return a table where each row from one table is paired with every row from the other. 
- **Natural joins** automatically join two relations based on all common attributes, which eliminates duplicates.
- **Theta joins** apply any condition between relations. 
###### Inner & Outer Joins in SQL
Inner
```sql
SELECT columns
FROM Table1
INNER JOIN Table2
ON Table1.common_column = Table2.common_column;
```
Left Outer
```sql
SELECT columns
FROM Table1
LEFT JOIN Table2
ON Table1.common_column = Table2.common_column;
```
Right Outer
```sql
SELECT columns
FROM Table1
RIGHT JOIN Table2
ON Table1.common_column = Table2.common_column;
```

| Join Type      | Matching Rows | Unmatched Left Rows | Unmatched Right Rows |
| -------------- | ------------- | ------------------- | -------------------- |
| **INNER JOIN** | Yes           | No                  | No                   |
| **LEFT JOIN**  | Yes           | Yes                 | No                   |
| **RIGHT JOIN** | Yes           | No                  | Yes                  |
| **FULL JOIN**  | Yes           | Yes                 | Yes                  |

###### Theta & Natural Joins in SQL
Theta join
```sql
SELECT * FROM Table1 JOIN Table2 ON Table1.column θ Table2.column;
```
Natural Join
```sql
SELECT * FROM Table1 NATURAL JOIN Table2;
```
