# Part 1
## Question 1
### What is a view?
A view is a virtual table. It is the result of a query to the original, or base, database. This can be useful in scenarios when you only need to see a certain part of a database instead of the whole thing. Views can also be used to provide live information from the database as it changes. 
### Update-able vs Non-update-able Views
In an update-able view, changes made to the base table are reflected in the virtual table. You can also execute queries on update-able views to modify their contents. Non-update-able views have none of this functionality, rendering them to be read-only in most cases. This makes non-update-able views more suited for data aggregation. 
## Question 2
### Checks
`CHECK` Conditions are used to validate that information entering a database satisfies specified conditions before it is added. Any query that does not satisfy the condition(s) will fail and generate an error. 

You can define check conditions like so:
```sql
CREATE TABLE Products ( 
	ProductID INT PRIMARY KEY, 
	ProductName VARCHAR(255) NOT NULL, 
	Price DECIMAL(10, 2) 
		CONSTRAINT CK_ProductPrice 
		CHECK (Price > 0), Quantity INT 
);
```
### Assertions
Assertions apply globally, meaning they are like `CHECK` constraints for multiple tables. They apply more complex conditions across the whole database. To create an assertion:
```sql
CREATE ASSERTION MaxTotalEnrollment
CHECK (
    (SELECT COUNT(*) FROM Students) <= 1000
);
```
## Question 3
### `BEFORE` vs `AFTER` Triggers
Triggers are constraints that only occur when a specific condition is met. These can be used on both base tables and views. The key difference between before and after triggers is when the action occurs. A before trigger executes before the specified condition, and an after trigger executes after the specified condition. 

Using lots of triggers might slow down database performance. If a database is being queried constantly, it will have to check each of those queries to verify if they match the set conditions. For this reason, it's likely best to use triggers only on views or smaller, less active databases. 
# Part 2
## Question 1
```sql
CREATE VIEW HighEarningEmployees AS
SELECT EmployeeID, Name, Salary, Department
FROM Employees
WHERE Salary > 80000;

SELECT Name FROM HighEarningEmployees
WHERE Department = 'IT';
```
![[Pasted image 20250318163754.png]]
![[Pasted image 20250318163818.png]]
## Question 2
```sql
CREATE TABLE Employees (
	EmployeeID INT PRIMARY KEY,
	Name TEXT,
	Age INT CHECK (Age >= 18)
);

CREATE TABLE Departments (
	DepID INT PRIMARY KEY,
	Name TEXT,
	Budget INT CHECK (Budget < 1000000)
);
```
![[Pasted image 20250318163908.png]]
![[Pasted image 20250318163924.png]]
## Question 3
I'm using SQLite, which does not directly support assertions. I used triggers instead. 
```sql
CREATE TRIGGER check_budget_insert
BEFORE INSERT ON Employees
FOR EACH ROW
BEGIN
    SELECT CASE
        WHEN (SELECT SUM(Salary) + NEW.Salary 
              FROM Employees 
              WHERE Dep_ID = NEW.Dep_ID)
             > 
             (SELECT Budget 
              FROM Departments 
              WHERE Departments.DepID = NEW.Dep_ID) 
        THEN
            RAISE(ABORT, 'Total salary exceeds department budget')
    END;
END;
```
![[Pasted image 20250318171647.png]]
- I received errors when trying to use IF statements, so I switched to using cases instead.
- I also was having trouble with making sure the column names matched their respective tables. 
## Question 4
```sql
CREATE TABLE IF NOT EXISTS EmployeeLog (
    EmployeeID INTEGER,
    Name TEXT,
    Timestamp DATETIME DEFAULT CURRENT_TIMESTAMP
);
```
```sql
CREATE TRIGGER after_employee_insert
AFTER INSERT ON Employees
FOR EACH ROW
BEGIN
    INSERT INTO EmployeeLog (EmployeeID, Name, Timestamp)
    VALUES (NEW.EmployeeID, NEW.Name, CURRENT_TIMESTAMP);
END;
```
![[Pasted image 20250318170432.png]]
