"""
22. Generate Parentheses

Submitted: February 3, 2026

Runtime: 0 ms (beats 100.00%)
Memory: 19.70 MB (beats 5.93%)
"""

import functools

class Solution:
    @functools.lru_cache()
    def generateParenthesis(self, n: int) -> List[str]:
        if n == 1:
            return ["()"]
        res = set(f"({p})" for p in self.generateParenthesis(n - 1))
        for i in range(1, n // 2 + 1):
            j = n - i
            a = self.generateParenthesis(i)
            b = a if i == j else self.generateParenthesis(j)
            for p in (x + y for (x, y) in product(a, b)):
                res.add(p)
            for p in (y + x for (x, y) in product(a, b)):
                res.add(p)
        return tuple(res)