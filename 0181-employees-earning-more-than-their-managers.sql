/*
181. Employees Earning More Than Their Manager

Submitted: June 18, 2025

Runtime: 316 ms (beats 99.32%)
*/

# Write your MySQL query statement below
SELECT e.name AS Employee 
FROM Employee e, Employee m 
WHERE e.managerId = m.id AND e.salary > m.salary;