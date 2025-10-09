"""
165. Compare Version Numbers

Submitted: June 6, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.63 ms (beats 88.97%)
"""

class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        if version1 == version2: return 0
        for i,j in itertools.zip_longest(
            (int(i) for i in version1.split('.')), (int(i) for i in version2.split('.')),
            fillvalue=0
        ):
            if i > j: return 1
            if i < j: return -1
        return 0