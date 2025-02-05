# Question 1
```sql
SELECT * FROM students;
```

| student_id | first_name | last_name | age | grade |
| ---------- | ---------- | --------- | --- | ----- |
| 0          | John       | Doe       | 20  | 3     |
| 1          | Jane       | Smith     | 22  | 4     |
| 2          | Alice      | Johns     | 19  | 2     |
| 3          | Bob        | Brown     | 21  | 3     |
# Question 2
```sql
SELECT * FROM students
WHERE age > 20;
```

| student_id | first_name | last_name | age | grade |
| ---------- | ---------- | --------- | --- | ----- |
| 1          | Jane       | Smith     | 22  | 4     |
| 3          | Bob        | Brown     | 21  | 3     |
# Question 3
```sql
SELECT * FROM students
WHERE first_name LIKE 'J%';
```

| student_id | first_name | last_name | age | grade |
| ---------- | ---------- | --------- | --- | ----- |
| 0          | John       | Doe       | 20  | 3     |
| 1          | Jane       | Smith     | 22  | 4     |
