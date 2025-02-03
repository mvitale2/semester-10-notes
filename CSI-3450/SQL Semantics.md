Algebra can describe how SQL queries work.

```sql
SELECT x1.a1, x1.a2, ..., xn.ak
FROM R1 AS x1, R2 AS x2, ..., Rn AS xn
WHERE Conditions(x1,..., xn);
```
# Semantics Steps
1. Take the cross product: X = R * S
2. Apply selections/conditions: 

