"""
3. Longest Substring Without Repeating Characters

Submitted: February 3, 2026

Runtime: 83 ms (beats 12.25%)
Memory: 19.33 MB (beats 36.34%)
"""


class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        res = 0
        # brute-force substrings
        for i in range(len(s)):
            for j in range(i + res + 1, len(s) + 1):
                m = j - i
                if res >= m:
                    continue
                sub = s[i:j]
                if len(set(sub)) == m:
                    res = max(res, m)
                else:
                    break
        return res