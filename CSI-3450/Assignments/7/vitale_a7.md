# Part 1
---
## Question 1
### Part a
Query optimization is the process of improving an SQL query so that it more efficiently uses the system's resources like CPU and memory. It's important so that queries can run faster and scale well as the database increases in size. 
### Part b
Query optimizers determine the most efficient way to execute SQL queries by choosing the most efficient execution plan based on an estimated cost. 
### Part c
Ways to implement these resource-saving measures are:
- Indexing creates data structures on one or more columns of a table to speed up data retrieval. This allows for the database to quickly locate each row without having to scan to the entire table. 
- Predicate Push-down applies filtering operations before operations like joins are executed in order to save CPU resources, since there will be less rows to process. 
- Query rewriting is straightforward since it is simply rewriting queries to perform the same action while using less resources. 
## Question 2
### Part a
#### Unoptimized Query: 0.000288 seconds
```sql
SELECT 
    (SELECT Name FROM Members WHERE Members.MemberID = Loans.MemberID) AS MemberName,
    (SELECT Title FROM Books WHERE Books.BookID = Loans.BookID) AS BookTitle,
    Loans.LoanDate,
    Loans.ReturnDate
FROM Loans;
```
#### Optimized Query: 0.000244 seconds
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
### Part b
Selected query:
```sql
SELECT Books.Title, Authors.Name, Books.YearPublished
FROM Books
JOIN Authors ON Books.AuthorID = Authors.AuthorID
WHERE Authors.Nationality LIKE '%American%'
  AND Books.YearPublished > 1900;
```
- `%American%` disables index use on `Authors.Nationality`.
- No composite index on filtering columns.
- Full scan on `Books` and `Authors`.

Optimized query:
```sql
SELECT Books.Title, Authors.Name, Books.YearPublished
FROM Books
JOIN Authors ON Books.AuthorID = Authors.AuthorID
WHERE Authors.Nationality = 'American'
  AND Books.YearPublished > 1900;
```
After these changes:
- PostgreSQL will use indexes instead of full scans.
- Execution plan will show Index Scan or Bitmap Index Scan.
- Query will be significantly faster, especially as data grows.

# Part 2
---
## Question 1
### Part 1
JDBC, which stands fo Java Database Connectivity, is an API used to connect Java applications to databases. ODBC, which stands for open database connectivity, can be used in a variety of languages and provides an interface that allows applications to access different DBMS. APIs can support almost any SQL language, and they are used to wrap SQL statements and connection logic into syntax that is more like the native language. 
### Part 2
In order to protect against SQL injection, SQL queries should parameterized instead of breaking out of the string in order to insert user input into the query. An example of a parameterized query:
```python
cursor.execute("SELECT * FROM Users WHERE username = ?", (username,))
```

Another security consideration is defining access control within the database itself. Limiting access to the database can prevent attacks from within an application. For example, if an application only has read access to a database, then an attacker cannot use the application to make any changes to the database. 
## Question 2
### Part 1
In a React web application, the easiest way to connect a database is through the use of a public cloud platform called Supabase. Supabase has its own JavaScript and Typescript library that wraps SQL statements into JS-like functions. The database's URL and private key are locally stored as environment variables so that they can be securely utilized within the app in order to access the database. 
### Part 2
It can be challenging to manage the state within a React application if the data is changing often. Additionally, it can be difficult to asynchronously pull data from a database and display it on the front-end. It's best to utilize a database mostly for back-end operations. 
## Question 3
```python
import psycopg2

# Replace these values with actual DB credentials
conn = psycopg2.connect(
    dbname="",
    user="",
    password="",
    host="",
    port=""
)

try:
    # Create a cursor object
    cursor = conn.cursor()

    # Sample query: Get all rows from a table called "books"
    cursor.execute("SELECT id, title, author FROM books;")

    # Fetch all rows
    rows = cursor.fetchall()

    # Print the results
    for row in rows:
        print(f"ID: {row[0]}, Title: {row[1]}, Author: {row[2]}")

except Exception as e:
    print("An error occurred:", e)

finally:
    # Close the cursor and connection
    cursor.close()
    conn.close()
```
# Part 3
## Question 1
### Part 1
A Database Administrator ensures that database are up to date and meet modern security standards. They also need to optimize database so that they can perform the most efficiently. 
### Part 2
#### 1. SQL Injection
- Attackers inject malicious SQL into queries via input fields.
- Impact: Unauthorized data access, modification, or deletion.
- Mitigation: Use parameterized queries, input validation, and ORM frameworks.
#### 2. Unauthorized Access
- Users or attackers access the database without proper permissions.
- Impact: Data leakage or corruption.
- Mitigation: Implement strong authentication, access control, and regular audits.
#### 3. Data Breaches
- Large-scale extraction of sensitive data, often via stolen credentials or software vulnerabilities.
- Impact: Legal consequences, reputation damage, data loss.
- Mitigation: Encryption, network firewalls, monitoring, and incident response plans.
#### 4. Privilege Escalation
- Exploiting bugs or misconfigurations to gain higher-level access than intended.
- Mitigation: Enforce least privilege, separate duties, and monitor for anomalies.
#### 5. Denial of Service (DoS)
- Overloading a database server to make it unavailable to legitimate users.
- Mitigation: Rate limiting, query optimization, and resource management.
### Part 3
#### 1. Encryption
- At Rest: Encrypt stored data (e.g., TDE – Transparent Data Encryption).
    - Protects data even if storage is stolen.
- In Transit: Use SSL/TLS to encrypt connections between client and server.
    - Prevents eavesdropping or tampering.
#### 2. Access Control
- User Roles: Assign specific permissions (e.g., read-only, admin).
- Principle of Least Privilege (PoLP): Give users only what they need.
- Auditing: Log who accessed what and when.
#### 3. Backup Strategies
- Full Backups: Copies of the entire database.
- Incremental Backups: Only changes since the last backup.
- Point-in-Time Recovery (PITR): Restore the database to a specific moment.
- Offsite Backups: Store in a different physical or cloud location.
- Automated + Tested: Schedule regular backups and test restoration procedures.
## Question 2
### Create Roles & Users
```sql
-- Create a read-only role
CREATE ROLE readonly;

-- Grant permissions to readonly
GRANT CONNECT ON DATABASE mydb TO readonly;
GRANT USAGE ON SCHEMA public TO readonly;
GRANT SELECT ON ALL TABLES IN SCHEMA public TO readonly;

-- Create a user and assign the role
CREATE USER alice WITH PASSWORD 'securepass123';
GRANT readonly TO alice;
```

```sql
CREATE ROLE dbadmin SUPERUSER LOGIN PASSWORD 'adminpass123';
```
### Example of Role-based Access
```sql
SET ROLE alice;
SELECT * FROM employees;      -- will work
INSERT INTO employees VALUES (...)  -- won't work
```

```sql
CREATE EXTENSION IF NOT EXISTS pgcrypto;
```
### Encryption & Decryption
`encryption key` should be replaced with an actual key. 
```sql
INSERT INTO employees (name, ssn)
VALUES ('John Doe', pgp_sym_encrypt('123-45-6789', 'encryption_key'));
```

```sql
SELECT name, pgp_sym_decrypt(ssn::bytea, 'encryption_key') AS ssn
FROM employees;
```
