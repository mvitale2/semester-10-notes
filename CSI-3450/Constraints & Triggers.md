A constraint is a relationship among data elements enforced by the DBMS. 

Triggers are operations that are executed when a specified condition occurs. 
- For example, after the insertion of a tuple
- Event-condition-action rules:
	- A trigger is awakened when some event occurs
	- Once awakened, a condition is tested
	- If the condition is satisfied, the action is carried out
# Kinds of Constraints
- Keys (referential-integrity)
- Value-based
- Tuple-based
- Assertions (any SQL boolean expression)
## Single-attribute keys
- PRIMARY KEY
- UNIQUE
## Multi-attribute Key
- PRIMARY KEY(n)
## Foreign Keys
A foreign key references an attribute of a second relation. 

Referential integrity can be violated, for example, when trying to refer to a value that does not exist in the second relation. 
### Syntax
```sql
FOREIGN KEY (wombo) REFERENCES bumbo (id);
```
# Attribute-based Check
```sql
CHECK TABLE sells (
	bar char(20),
	beer char(20) CHECK (beer IN
		(SELECT name FROM beers)),
	price REAL CHECK (price <= 5.00)
);
```
