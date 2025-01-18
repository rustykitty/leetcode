"""
1323. Maximum 69 Number

Submitted: January 17, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.97 MB (beats 15.18%)
"""

class Solution:
    def maximum69Number(self, num: int) -> int:
        return max(
            max(
                int(''.join(
                    ('6' if str(num)[i] == '9' else '9') if i == j else str(num)[j] for j in range(len(str(num)))
                )) for i in range(len(str(num)))
            ),
            num
        )