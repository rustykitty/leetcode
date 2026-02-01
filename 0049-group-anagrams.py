"""
49. Group Anagrams

Submitted: Nov 20, 2025

Runtime: 9 ms (beats 89.43%)
Memory: 20.68 MB (beats 20.68%)
"""

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}
        for s in strs:
            s_sorted = ''.join(sorted(s))
            if s_sorted not in d:
                d[s_sorted] = []
            d[s_sorted].append(s)
        return list(d.values())