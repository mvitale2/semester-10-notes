# Part 1
## Question 1
Query optimization is the process of improving an SQL query so that it more efficiently uses the system's resources like CPU and memory. It's important so that queries can run faster and scale well as the database increases in size. 

Query optimizers determine the most efficient way to execute SQL queries by choosing the most efficient execution plan based on an estimated cost. 

Ways to implement these resource-saving measures are:

- Indexing creates data structures on one or more columns of a table to speed up data retrieval. This allows for the database to quickly locate each row without having to scan to the entire table. 
- Predicate Pushdown applies filtering operations before operations like joins are executed in order to save CPU resources, since there will be less rows to process. 
- Query rewriting is straightforward since it is simply rewriting queries to perform the same action while using less resources. 
## Question 2
Using the included [[library.db]].
### Unoptimized Query: 0.000288 seconds
```sql
SELECT 
    (SELECT Name FROM Members WHERE Members.MemberID = Loans.MemberID) AS MemberName,
    (SELECT Title FROM Books WHERE Books.BookID = Loans.BookID) AS BookTitle,
    Loans.LoanDate,
    Loans.ReturnDate
FROM Loans;
```
### Optimized Query: 0.000244 seconds
```sql
SELECT 
    Members.Name AS MemberName,
    Books.Title AS BookTitle,
    Loans.LoanDate,
    Loans.ReturnDate
FROM Loans
JOIN Members ON Loans.MemberID = Members.MemberID
JOIN Books ON Loans.BookID = Books.BookID;
```

This query uses join to fetch related data in a single pass. It's also far more readable. 


# Part 2
