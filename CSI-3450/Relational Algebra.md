| Symbol | Meaning           | Unicode      |
| ------ | ----------------- | ------------ |
| σ      | Selection (sigma) | `U+03C3` (σ) |
| π      | Projection (pi)   | `U+03C0` (π) |
| ⨝      | Natural Join      | `U+2A1D` (⨝) |
| ⋈      | Inner Join        | `U+22C8` (⋈) |
| ⟕      | Left Outer Join   | `U+27D5` (⟕) |
| ⟖      | Right Outer Join  | `U+27D6` (⟖) |
| ⟗      | Full Outer Join   | `U+27D7` (⟗) |
| ∪      | Union             | `U+222A` (∪) |
| ∩      | Intersection      | `U+2229` (∩) |
| −      | Difference        | `U+2212` (−) |
| ×      | Cartesian Product | `U+00D7` (×) |
These symbols are the *operators* and the data that are being manipulated are the *operands*. 
# Converting SQL to RA
## SQL
```sql
SELECT R.A, S.D
FROM R, S, T
WHERE R.B = S.B
AND S.C = T.C
AND R.A < 10;
```
## RA
$πA,D(σA<10(T⋈(R⋈S)))$

# Expression Trees
