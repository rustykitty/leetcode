/*
584. Find Customer Referee

Submitted: June 18, 2025

Runtime: 484 ms (beats 40.14%)
*/

# Write your MySQL query statement below
SELECT name FROM Customer WHERE referee_id IS NULL OR referee_id != 2;