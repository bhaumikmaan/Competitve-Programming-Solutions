# Write your MySQL query statement below
SELECT * from (
SELECT product_id , 'store1' AS store , store1 AS price FROM Products
UNION
SELECT product_id , 'store2' AS store , store2 AS price FROM Products
UNION
SELECT product_id , 'store3' AS store , store3 AS price FROM Products
) store 
WHERE price IS NOT NULL ;
