"""
412. Fizz Buzz

Submitted: February 26, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 18.44 MB (beats 26.16%)
"""

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        return [
            "FizzBuzz" if i % 3 == 0 and i % 5 == 0 else
            "Fizz" if i % 3 == 0 else
            "Buzz" if i % 5 == 0 else
            str(i)
            for i in range(1, n + 1)
        ]