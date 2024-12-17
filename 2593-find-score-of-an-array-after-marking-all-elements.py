"""
2593. Find Score of an Array After Marking All Elements

LeetCode Daily Question for December 13, 2024

Runtime: 248 ms (beats 84.86%)
Memory: 43.81 MB (beats 32.48%)
"""

class Solution:
    def findScore(self, nums: List[int]) -> int:
        marked = set()
        score = 0
        for i, j in sorted(enumerate(nums), key=lambda x: x[1]):
            if i in marked:
                continue
            score += j
            marked.add(i)
            marked.add(i - 1)
            marked.add(i + 1)
        return score