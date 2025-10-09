/*
3436. Find Valid Emails

Submitted: June 18, 2025

Runtime: 317 ms (beats 100.00%)
*/

# Write your MySQL query statement below
SELECT user_id, email FROM Users
WHERE email LIKE '%@%.com'
AND email REGEXP '^\\w+@[A-Za-z]+\\.com$'
ORDER BY user_id ASC;