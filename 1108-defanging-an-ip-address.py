"""
1108. Defanging an IP Address

Submitted: October 7, 2024

Runtime: 33 ms (beats 66.09%)
Memory: 16.56 mb (beats 42.94%)
"""

class Solution:
    def defangIPaddr(self, address: str) -> str:
        return address.replace('.', '[.]')