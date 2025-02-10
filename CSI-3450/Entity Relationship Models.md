# Elements of the E/R Model
- An entity is an object. An object can have attributes. 
- An entity set is a collection of similar entities. 
- An attribute is a property of an entity set. 
## Examples
### Library
**Entities:** Book, author, member, loan
**Book attributes:** Title, publication date, ISBN
### Online shopping
**Entities:** customer, order, product, payment
**Customer attributes:** email, phone number, name, rewards id, address
# Database design
Conceptual design
- Build a model independent of the DBMS.
Logical design
- Create the database in a given DBMS.
Physical design
- How the database is stored in hardware.
# E/R Modeling
Modeling is used for conceptual design. A model includes:
- Entities - usually a noun
- Attributes - usually a verb
- Relationships - links between entities
## Entity Sets
A set of multiple entities.
## Cardinality Ratios
- Zero-to-one
- One-to-one
- One-to-many
- Many-to-many
	- This cardinality can lead to redundancy. It's best to break it into two one-to-many relationships. 
## Instances
A relationship R that connects n entity sets has an instance. In other words, an occurrence of one entity that has its own attributes. 

For example, the tuple Customer(Ben, 1234567890, 123 main st) is a relationship set for the current instance of R. This is equivalent to one table within the database. 

Ben is an instance of name, just like how his phone number and street are instances of their respective columns. 

Customer

| Name | Phone #    | Street      |
| ---- | ---------- | ----------- |
| Ben  | 1234567890 | 123 main st |
## Attributes
```mermaid
erDiagram
	PRODUCT {
		int Price
		string Description
	}
	ADDRESS {
		string StreetAddr
		string City
		string PostalCode
	}
	SUPPLIER {
		string Name
		string PhoneNumber
	}

	PRODUCT |{--|| SUPPLIER : has
	SUPPLIER ||--|| ADDRESS : has
```

Improved ER diagram -- merged SUPPLIER and ADDRESS
```mermaid
erDiagram
	PRODUCT {
		int Price
		string Description
	}
	SUPPLIER {
		string Name
		string PhoneNumber
		string StreetAddr
		string City
		int PostalCode
		string PhoneNumber
	}
	PRODUCT |{--|| SUPPLIER : has
```
## Relationships
A connection between two or more entities. In contrast, a relation is a tuple or pair of entities, or an entity set. 

Includes:
- Name
- Entity set
- Degree - the number of entities that can participate
- Cardinality
### Relationship Sets
Describes the relationship between multiple instances of entities. 
```mermaid
 erDiagram
	 SHOP {
		 string name
		 string address
	 }
	 SODA {
		 string name
		 string manufacturer
	 }
	 SHOP ||--|{ SODA : sells
```
A relationship set of this ER would look like this:

| shop  | sells     |
| ----- | --------- |
| Joe's | Fanta     |
| Joe's | Sprite    |
| Sue's | Fanta     |
| Sue's | Coca-Cola |
| Sue's | Zero      |

### Relations
For a relationship between customers, products, and suppliers, a relation between the entities could be represented like this:

### Three-way Relationships
```mermaid
	erDiagram
		SHOPS ||--|| DRINKERS : preferences
		SODA ||--|| DRINKERS : preferences
		SHOPS ||--|| SODA : preferences
```
## Multiplicity
In a one-to-one relationship, an entity can only be assigned to exactly one entity.

In a many-to-one relationship, an entity can be assigned to 0 or more entities. 
```mermaid
erDiagram
	CocaColaCo ||--|| CocaCola : best-seller
	PepsiCo ||--|| Pepsi : best-seller
```
## Roles
```mermaid
erDiagram
	MARRIED ||--|| DRINKERS : husband
	MARRIED ||--|| DRINKERS : wife
```
### Drinkers Table

| ID  | Name         | Favorite Drink |
| --- | ------------ | -------------- |
| 001 | John Smith   | CocaCola       |
| 002 | Ruby Jackson | Sprite         |
### Married Table

| ID  | Drinker ID 1 | Drinker ID 2 | Marriage Date |
| --- | ------------ | ------------ | ------------- |
| 01  | 001          | 002          | 1-1-25        |
# Subclasses
```mermaid
erDiagram
	SODA {
		string flavor
		string name
		string manufacturer
	}
	COCA-COLA {
		string color
	}
	COCA-COLA ||--|| SODA : "is a"
```
## E/R vs. OOP Subclasses
In OO, objects are in one class only. Subclasses inherit from super classes.

In contrast, E/R entities have representatives. 
### Soda Table

| SodaID | SodaName | Flavor  | Manufacturer  |
| ------ | -------- | ------- | ------------- |
| 001    | Cola     | Classic | Coca Cola Co. |
| 002    | Lemonade | Lemon   | Xy Co.        |
| 003    | Fanta    | Classic | Coca Cola co. |
### Coca Cola Table
| SodaID | SodaName | Flavor  | Manufacturer  | Color  |
| ------ | -------- | ------- | ------------- | ------ |
| 001    | Cola     | Classic | Coca Cola Co. | Brown  |
| 003    | Fanta    | Classic | Coca Cola co. | Orange |
## Three Approaches to Subclasses
1. Object-oriented: One relation per subset of subclasses, with all relevant attributes.
2. Use nulls: One relation; entities have NULL in attributes that don't belong to them.
3. E/R style: One relation for each subclass:
   - Key attribute(s).
   - Attributes of that subclass. 
### Object-oriented

| name | manf           |
| ---- | -------------- |
| Bud  | Anheuser-Busch |

| name       | manf   | color |
| ---------- | ------ | ----- |
| Summerbrew | pete's | dark  |
### Using Nulls

| name       | manf           | color |
| ---------- | -------------- | ----- |
| Bud        | Anheuser-Busch | NULL  |
| Summerbrew | Pete's         | dark  |

# Keys
A key is a set of attributes for one entity set such that no two entities in this set can have all the attributes of the key. 
## Keys in E/R Diagrams
In this example, the name attribute **name** is a key for **Soda**
```mermaid
erDiagram
	SODA {
		string flavor
		string name
		string manufacturer
	}
	COCA-COLA {
		string color
	}
	COCA-COLA ||--|| SODA : "is a"
```
## Multi-attribute Key
Entities can have multiple keys. In this example **dept** and **number** are both keys. The key must be unique, which is why this can be useful when entities have the same value for one key.
```mermaid
erDiagram
	COURSES {
		string dept
		number number
		string hours
		string room
	}
```
For example:

| dept | number |
| ---- | ------ |
| MTH  | 001    |
| CSE  | 001    |
These courses can have the same course number, but still be uniquely identified by combining both the **department** and **number** attributes. 
# Weak Entity Sets
```mermaid
erDiagram
	PLAYERS {
		string name
		int number
	}
	TEAMS {
	string name
	}
	PLAYERS }|--|| TEAMS : "plays on"
```
Weak entity sets are useful when there is no global authority capable of creating unique ID's. For example, it would not be possible to assign a unique number to each player on each team across one sports league. 
## Handling Weak Entity Sets
```mermaid
erDiagram
	LOGINS {
		string name
		string billTo
	}
	HOSTS {
		string name
		string location
	}
	LOGINS }o--|| HOSTS : at
```
It can be useful to convert weak entity sets to relations:
Hosts(hostName, location)
Logins(loginName, hostName, billTo)

All entities must be convertible to relations or tables.
Some relationships need to be converted into relations or tables. 
# Design Techniques
1. Avoid redundancy
2. Limit the use of weak entity sets
3. Don't use an entity set when an attribute will do. This will mostly apply to one-to-one relationships. 
## Examples of good design
```mermaid
erDiagram
	SODA {
		string name
	}
	MANF {
		string name
		string addr
	}
	MANF ||--|{ SODA : manufactures
```
In this example, manufacturer has no specific attributes other than name, so it is suitable to only include it as an attribute of soda. 
```mermaid
erDiagram
	SODA {
		string name
		string manf
	}
```
## Examples of bad design
This example states the manufacturer of a soda twice: as an attribute and as a related entity. 
```mermaid
erDiagram
	SODA {
		string name
		string manf
	}
	MANFS{
		string name
		string addr
	}
	SODA }|--|| MANFS: "manufactured by"
```
This design repeats the manufacturer's address multiple times for each soda. The solution is to ensure that the manufacturer exists as a separate entity. 
```mermaid
erDiagram
	SODA {
		string name
		string manf
		string manfAddr
	}
```

