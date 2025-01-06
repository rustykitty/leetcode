"""
1769. Minimum Number of Operations to Move All Balls to Each Box

LeetCode Daily Quesiton for January 6, 2025

Runtime: 2922 ms (beats 18.68%)
Memory: 17.99 MB (beats 33.80%)
"""

class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        return [sum(abs(i - j) for j in range(len(boxes)) if boxes[j] == '1') for i in range(len(boxes))]