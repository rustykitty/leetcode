/*
1683. Invaild Tweets

Submitted: October 17, 2024

Runtime: 761 ms (beats 24.06%)
*/

# Write your MySQL query statement below
SELECT tweet_id FROM Tweets WHERE LENGTH(content) > 15;