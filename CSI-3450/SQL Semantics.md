Algebra can describe how SQL queries work.

```sql
SELECT x1.a1, x1.a2, ..., xn.ak
FROM R1 AS x1, R2 AS x2, ..., Rn AS xn
WHERE Conditions(x1,..., xn);
```
# Semantics Steps
1. Take the cross product: X = R * S
2. Apply selections/conditions: 

# NULLS
- Value does not exist
- Value exists but is unknown
- Value is not applicable
There are three values for boolean operations:
- 0 = FALSE
- 0.5 = UNKNOWN
- 1 = TRUE

AND/OR operations in SQL depend on the value of the boolean. For example, an AND operation would return 0.5 where 1 and 0.5 are being compared. AND returns the minimum value, while OR returns the maximum value. 

Example:
```sql
SELECT * FROM Person WHERE (age < 25) AND (height > 6 AND weight > 190);
```

You can test for NULL specifically.
```sql
SELECT * FROM person WHERE age < 25 OR age >= 25 or age IS NULL;
```
