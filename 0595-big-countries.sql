/*
595. Big Countries

Submitted: May 20, 2025

Runtime: 260 ms (beats 86.70%)
*/

# Write your MySQL query statement below
SELECT name, population, area FROM World 
WHERE area >= 3000000 OR population >= 25000000