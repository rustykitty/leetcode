/*
627. Swap Salary

Submitted: June 18, 2025

Runtime: 201 ms (beats 99.91%)
*/

# Write your MySQL query statement below
-- IF(cond, trueval, falseval) like `cond ? trueval : falseval` in C
UPDATE Salary SET sex = IF(sex = 'm', 'f', 'm');