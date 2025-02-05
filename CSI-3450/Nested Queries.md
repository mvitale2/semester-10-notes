Queries inside other queries.
# Example
```sql
SELECT c.city
FROM Company c
WHERE c.name IN (
	SELECT pr.maker
	FROM Purchase p, Product pr
	WHERE p.product = pr.name
	AND p.buyer = 'Co X';
);
```

## In tables
Product

| Name     | Maker     |
| -------- | --------- |
| Widget A | Gizmo     |
| Widget B | Gizmo     |
| Gadget X | Tech Corp |
| Gadget Y | Innovated |
| Gizmo C  | Gizmo     |
Purchase

| Name     | Company |
| -------- | ------- |
| Widget A | Co X    |
| Widget B | Co X    |
| Gadget X | Co Y    |
| Gadget Y | Co Y    |
| Gizmo C  | Co Z    |
Company

| Maker     | City    |
| --------- | ------- |
| Gizmo     | NY      |
| Tech Corp | NY      |
| Innovated | Chicago |
The output of the query would look like this:

|     |     |
| --- | --- |
|     |     |
