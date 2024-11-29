"""
1676. Richest Customer Wealth

Submitted: October 30, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 16.65 MB (beats 64.16%)
"""

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        return max(sum(customer) for customer in accounts)