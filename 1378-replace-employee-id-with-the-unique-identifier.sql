/*
1378. Replace Employee ID With The Unique Identifier

Submitted: June 18, 2025

Runtime: 1180 ms (beats 50.56%)
*/

# Write your MySQL query statement below
SELECT EmployeeUNI.unique_id, Employees.name FROM Employees
LEFT JOIN EmployeeUNI ON Employees.id = EmployeeUNI.id;