"""
383. Ransom Note

Submitted: September 24, 2025

Runtime: 11 ms (beats 90.40%)
Memory: 17.91 MB (beats 54.34%)
"""

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        r = Counter(ransomNote)
        m = Counter(magazine)
        return all(m[k] >= r[k] for k in r)