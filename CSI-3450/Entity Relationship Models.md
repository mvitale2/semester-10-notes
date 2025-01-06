# Elements of the E/R Model
- An entity is an object. An object can have attributes. 
- An entity set is a collection of similar entities. 
- An attribute is a property of an entity set. 
## Examples
![[example-erd.png]]
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
- Entities
- Attributes
- Relationships - links between entities
## Relationships
Includes:
- Name
- Entity set
- Degree - the number of entities that can participate
- Cardinality