/*
620. Not Boring Movies

Submitted: June 18, 2025

Runtime: 233 ms (beats 58.14%)
*/

# Write your MySQL query statement below
SELECT * FROM cinema 
WHERE id % 2 = 1 AND description != 'boring' 
ORDER BY rating DESC;