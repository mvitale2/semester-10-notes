SQL joins are inner joins by default. 
```sql
SELECT Product.name, Purchase.store FROM Product 
JOIN Purchase ON Product.name = Purchase.prodName;
```
# Outer Joins
An outer join returns tuples from the joined relations that don't have a corresponding tuple in the other relations. 
```sql
SELECT Product.name, Purchase.store
FROM Product
	LEFT OUTER JOIN Purchase ON Product.name = Purchase.prodName;
```
Other outer joins:
- Left: Include left tuple
- Right Include right tuple
- Full: Include both left and right

# Joins from [[Relational Algebra]]
## Theta-Join (⨝θ)
R3:=R1 JOINC R2
- Take the product R1 * R2
- Then apply SELECTC to the output. 
## Natural Join (⨝)
ShopInfo := Sells JOIN Shops

