Views are virtual tables. They are saved outputs of queries that run automatically to obtain the most recent version of the query's results. The tables that views are created from are called base tables. 

To create a view:
```sql
CREATE VIEW viewname AS SELECT query;
```
A more detailed example:
```sql
CREATE VIEW "detroit-view" AS
	SELECT buyer, seller, product, store
	FROM Person, Purchase
	WHERE Person.city = 'Detroit' AND
		Person.name = Purchase.buyer
```
Then use the view:
```sql
SELECT Detroit_view.name, Detroit_view.store
FROM "Detroit-view" AS "Detroit_view"
INNER JOIN Product
ON Detroit_view.product = Product.name
WHERE Product.category = 'shoes';
```
The operators are the same, but the view title needs to be written in double quotes. 