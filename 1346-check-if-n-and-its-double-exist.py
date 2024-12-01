"""
1346. Check If N and Its Double Exist

Leetcode Daily Question for December 1, 2024

Runtime: 21 ms (beats 6.48%)
Memory: 17.14 MB (beats 8.21%)
"""

class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        return any(any(i != j and arr[i] == 2 * arr[j] for j in range(len(arr))) for i in range(len(arr)))
