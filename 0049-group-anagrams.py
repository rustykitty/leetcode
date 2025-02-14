"""
49. Group Anagrams

Submitted: February 11, 2025

Runtime: 21 ms (beats 24.46%)
Memory: 20.82 MB (beats 56.56%)
"""

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        strs.sort(key=sorted)
        return [list(group) for (key, group) in itertools.groupby(strs, key=sorted)]