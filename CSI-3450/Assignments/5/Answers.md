# Part 1
## Question 1
### What is a view?
A view is a virtual table. It is the result of a query to the original, or base, database. This can be useful in scenarios when you only need to see a certain part of a database instead of the whole thing. Views can also be used to provide live information from the database as it changes. 
### Updateable vs Non-updateable Views
In an updateable view, changes made to the base table are reflected in the virtual table. You can also execute queries on updateable views to modify their contents. Non-updateable views have none of this functionality, rendering them to be read-only in most cases. This makes non-updateable views more suited for data aggregation. 
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
