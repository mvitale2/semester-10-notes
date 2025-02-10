SQL is a DML, or data manipulation language. 

An example of a query:
```sql
CREATE TABLE <name> (
	<list of elements>
);
```
To delete the table:
```sql
DROP TABLE <name>;
```
# Data Types
- INT
- REAL or FLOAT
- CHAR(n) = fixed-length string of n characters
- VARCHAR(n) = variable-length string of up to n characters. 
- BIGINT
- SMALLINT
- MONEY
- DATE
- TIME
- DATETIME
# Single-Attribute Keys
Place `PRIMARY KEY` or `UNIQUE` after the type declaration. 
Example:
```sql
CREATE TABLE Sells values(
	Shop CHAR(20),
	Soda VARCHAR(20),
	price REAL,
	PRIMARY KEY (Shop, Soda),
);
```
## Primary Keys vs. Unique Keys
1. There can only be one PRIMARY KEY for a relation, but several UNIQUE attributes.
2. No attribute of  a PRIMARY KEY can ever be NULL in any tuple, but attributes declared UNIQUE may have NULL values. There may be several tuples with NULL. 
# Data Model
Relational models use algebra

Relations have schemas:
- Logical: describes types, names
- Physical, describes data layout
- Virtual: derived tables
# Set Algebra
List: {1, 2, 3, 4, 4}
Set: {1, 2, 3}
Multiset: {1, 1, 2, 3}
## Unions
Set: {1, 2, 3} U {2} = {1, 2, 3}
Multiset: {1, 1, 2, 3} U {2} = {1, 1, 2, 2, 3}
## Cross-product
{1, 1, 2, 3} * {y, z} = {
	<1, y>, <1, y>, <2, y>, <3, y>, <1, z>, <1,z>, <2, z>, <3, z>
}

# Declaring Schema
```sql
Students(sid: string, name: string, gpa: float)

CREATE TABLE Students (
	sid CHAR(20),
	name VARCHAR(50),
	gpa float,
	PRIMARY KEY (sid),
)
```
# Notation
Input schema:
Product(*Pname*, Price, Category, *Manufacturer*)
Output schema:
Answer(*Pname*, Price, Manufacturer)

```sql
SELECT Pname, Price, Manufacturer
FROM Product
WHERE Category = 'Gadgets';
```
## Projection
```sql
SELECT Pname, Price, Manufacturer
FROM Product
WHERE Category = Product
```
## LIKE: String pattern matching
```sql
SELECT *
FROM Products
WHERE Pname LIKE '%gizmo%';
```

Identify strings with 'a' in the second position:
```sql
SELECT * FROM Customers WHERE CustomerName LIKE '_a%';
```

Negative searches:
```sql
SELECT * FROM Supplier WHERE ContactName NOT LIKE 'a%';
```
## ORDER BY: Sorting the results
Searched data can be ordered. 
```sql
SELECT PName, Price, Manufacturer FROM Product WHERE Category='gizmo' AND Price > 50 ORDER BY Price, PName;
```
## Referencing Foreign Keys
```sql
Foreign Key (Studentid) REFERENCES Student (sid);
```
## Joins
```sql
SELECT PName, Price
FROM Product, Company
WHERE Product.Manufacturer = Company.CName 
AND Company.Country = 'Japan' 
AND Product.Price <= 200;
```

| PName       | Price | Category    | Manufacturer |
| ----------- | ----- | ----------- | ------------ |
| Gizmo       | $19   | Gadgets     | GizmoWorks   |
| Powergizmo  | $29   | Gadgets     | GizmoWorks   |
| SingleTouch | $149  | Photography | Canon        |
| MultiTouch  | $203  | Household   | Hitachi      |

| CName      | Stock Price | Country |
| ---------- | ----------- | ------- |
| GizmoWorks | 25          | USA     |
| Canon      | 65          | Japan   |
| Hitachi    | 15          | Japan   |
The above query outputs the following result with the above tables:

| PName       | Price |
| ----------- | ----- |
| SingleTouch | $149  |
# Simple Aggregations
1. Sum
2. Avg
3. Count
4. GroupBy
## SUM

| Product | Date | Price | Quantity |
| ------- | ---- | ----- | -------- |
| bagel   | 1/10 | 1     | 20       |
| banana  | 1/8  | 3     | 100      |
| pear    | 1/19 | 2     | 50       |
| bagel   | 1/2  | 4     | 40       |
```sql
SELECT SUM(price * quantity)
FROM Purchase
WHERE product = 'bagel';
```
Output:
selects both bagel rows and multiples price and quantity, then adds them together.
$(1*20) + (4*40) = 180$
## GROUPBY
| Product | Date | Price | Quantity |
| ------- | ---- | ----- | -------- |
| bagel   | 1/10 | 1     | 20       |
| banana  | 1/8  | 3     | 100      |
| banana  | 1/19 | 2     | 50       |
| bagel   | 1/2  | 4     | 40       |
```sql
SELECT product, SUM(price * quantity) AS TotalSales
FROM Purchase
WHERE date > '10/1'
GROUP BY product
```
Output:

There would only be two cells in the product column, bagel and banana. The corresponding rows would be aligned with their respective products. 
# HAVING Clause
```sql
SELECT product, SUM(price*quantity)
FROM purchase
WHERE date > '10/1/2025'
GROUP BY product
HAVING SUM(quantity) > 100;
```
Having clauses contain conditions on aggregates, whereas WHERE clauses condition on individual tuples. 
## General Form
```sql
SELECT S
FROM R1...Rn
WHERE C1
GROUP BY a1...ak
HAVING C2
```
Evaluation steps:
1. Evaluate FROM-WHERE
2. GROUP BY the attributes a1,..., ak
3. Apply condition C2 to each group (may need to compute aggregates)
4. Compute aggregates in S and return the result