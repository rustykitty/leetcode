/*
183. Customers Who Never Order

Submitted: June 18, 2025

Runtime: 474 ms (beats 94.49%)
*/

/*
Explanation:
Basically, what this LEFT JOIN is doing is associating customers with their
orders. Then, the WHERE is filtering based on customers that are not associated
with any orders.
*/

# Write your MySQL query statement below
SELECT c.name AS Customers
FROM Customers AS c
LEFT JOIN Orders as o ON c.id = o.customerId 
WHERE o.id IS NULL;