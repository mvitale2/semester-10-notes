### Relational Algebra

|Operation|Symbol|Description|
|---|---|---|
|Selection|σ|Filters rows (`σ Age > 25 (Employees)`)|
|Projection|π|Selects columns (`π Name, Salary (Employees)`)|
|Join|⨝|Combines rows from two tables based on condition|
|Union|∪|Combines rows from both tables (no duplicates)|
|Difference|−|Rows in A not in B|
|Rename|ρ|Renames relation or attribute|
### Query Optimization
- **Goal**: Reduce query execution time & resources
- **Techniques**:
    - Indexing (`CREATE INDEX ON Employees(Salary)`)
    - Rewriting queries to reduce JOINs or subqueries
    - Analyze plans: `EXPLAIN ANALYZE`
### Functional Dependencies
- A → B: A uniquely determines B
- Used in normalization to reduce redundancy
### Normalization

|Normal Form|Condition|
|---|---|
|**1NF**|Atomic attributes (no repeating groups)|
|**2NF**|No partial dependencies on composite key|
|**3NF**|No transitive dependencies|
|**BCNF**|Determinants are candidate keys|
|**4NF**|No multivalued dependencies (MVDs)|
### Views, Checks, Assertions, Triggers
**Views**
- Virtual table (`CREATE VIEW AS SELECT ...`)
- Non-updatable if contains JOINs, aggregates
**CHECK Constraints**
```sql
ALTER TABLE Employees ADD CHECK (Age >= 18);
```
**Assertions**
- Cross-table constraints (rarely supported)
- Often simulated with triggers
**Triggers**
```sql
CREATE TRIGGER trg_name
AFTER INSERT ON Table
FOR EACH ROW EXECUTE FUNCTION function_name();
```
### Indexes
|Type|Description|
|---|---|
|**B-Tree**|Balanced tree, default index type|
|**B+Tree**|Data in leaves, better for range queries|
|**Multilevel**|Tree of indexes (index on indexes)|
### Connectivity Methods
| Method                 | Description                         |
| ---------------------- | ----------------------------------- |
| **JDBC**               | Java DB access                      |
| **ODBC**               | Standard API for multiple platforms |
| **APIs (REST)**        | Web access via HTTP                 |
| **ORM (e.g., Django)** | Object-Relational Mapping in code   |
