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
