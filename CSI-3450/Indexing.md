Indexing is a technique used in SQL databases to increase the speed at which certain database objects can be accessed. By assigning an index, or pointer, to each object, the database does not need to scan the entire table in order to find the object. 
# Types of Indexes
## Primary
Automatically created when a **PRIMARY KEY** constraint is defined. The search key is sequentially ordered. This is also called cluster indexing. 
## Ordered
Data is stored in a sorted order using pointers to database objects. In [[Algorithmic Analysis|big O notation]], the amount of time it takes to search using ordered indexing is **O(log *n*)**. This makes them more efficient for use with range queries, prefix-based searching, and `JOIN` & `GROUP BY` operations. 

Ordered indices use a B-Tree structure of nodes. This requires additional storage space. 
## Hash
Hash indexes generate a unique hash for each column value. This makes the search time constant, or O(1), to find a database object. Conversely, this means that hash indexes are not sorted in order. 

Example of defining a hash index in SQL:
```sql
CREATE INDEX idx_user_id ON users(user_id) USING HASH;
```

The primary disadvantage of hash indexing is the possibility of hash collisions although this would only be likely in databases with incredibly large amounts of data. Additionally, hash indexes require additional storage space for hash tables. 
## Dense
A **dense index** stores an entry **for every record** in the table. Each entry in the index contains a key and a pointer to the actual row in the table.
- The index is usually stored in **sorted order** for quick lookups.
- Searching is **fast** because every record has an index entry.
## Sparse
Contains index records for only some search-key values. It is used primarily in **clustered indexes**, where records are already sorted. 
- The index does **not** store every row, only **one entry per block** or group of records.
- Each index entry contains a **key and a pointer** to the actual row or block.
- The database **searches sequentially** from the nearest index entry.

To find a record with search-key value K:
- Find index record with largest search-key value < K
- Search file sequentially starting at the record to which the index record points. 
