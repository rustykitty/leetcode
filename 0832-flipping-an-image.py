"""
832. Flipping an Image

Submitted: January 17, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.73 MB (beats 32.61%)
"""

class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        return [[int(not k) for k in i] for i in (j[::-1] for j in image)]