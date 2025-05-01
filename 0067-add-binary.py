"""
67. Add Binary

Runtime: 0 ms (beats 100.00%)
Memory: 17.76 MB (beats 73.35%)
"""

class Solution:
    def addBinary(self, a: str, b: str) -> str:
        return bin(int(a, 2) + int(b, 2))[2:]