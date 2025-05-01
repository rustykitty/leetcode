"""
187. Repeated DNA Sequences

Submitted: April 16, 2025

Runtime: 39 ms (beats 15.79%)
Memory: 29.16 MB (beats 48.93%)
"""

class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        if len(s) <= 10:
            return []
        def _():
            dq = deque(s[:10])
            for i in s[10:]:
                yield ''.join(dq)
                dq.popleft()
                dq.append(i)
            yield ''.join(dq)
        return [
            k for k,v in Counter(_()).items()
            if v >= 2
        ]