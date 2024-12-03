/*
175. Combine Two Tables

Submitted: October 13, 2024

Runtime: 399 ms (beats 83.54%)
*/

# Write your MySQL query statement below
SELECT firstName, lastName, city, state
FROM Person
LEFT JOIN Address -- we need to use LEFT JOIN so that `null` is produced if the
USING (personId); -- address of a Person is not found in Address
