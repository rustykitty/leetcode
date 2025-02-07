"""
2469. Convert the Temperature

Submitted: October 3, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 17.94 MB (beats 16.66%)
"""

class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        return celsius + 273.15, celsius * 1.80 + 32.00