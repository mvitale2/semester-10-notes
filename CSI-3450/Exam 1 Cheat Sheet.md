##### Joins
- **Inner joins** return only the records that have matching values in both tables.
- **Left Outer Joins** return all records from the left table and matching records from the right table. 
- **Right outer joins** return all records from the right table and matching records from the left table. 
- **Full outer joins** return all records when there is a match in either table.
- **Cross joins** return a table where each row from one table is paired with every row from the other. 
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

##### SQL Queries Examples
###### LIKE
```sql
SELECT * FROM users WHERE email LIKE '%@gmail.com';
---
SELECT * FROM users WHERE username LIKE 'J____';
```
###### Foreign Keys
```sql
FOREIGN KEY (dept_id) REFERENCES departments(dept_id) ON DELETE CASCADE
```
###### GROUP BY
```sql
SELECT dept_id, COUNT(*) AS num_employees FROM employees GROUP BY dept_id;
```
###### WHERE vs. HAVING
- **WHERE** filters **before** grouping (on individual rows).
- **HAVING** filters **after** grouping (on aggregated results).
WHERE
```sql
SELECT * FROM employees WHERE salary > 50000;
```
HAVING
```sql
SELECT dept_id, COUNT(*) AS num_employees FROM employees GROUP BY dept_id 
HAVING COUNT(*) > 5;
```
###### ON
```sql
SELECT employees.name, departments.dept_name FROM employees JOIN departments ON employees.dept_id = departments.dept_id;
```
