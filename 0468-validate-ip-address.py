"""
468. Validate IP Address

Submitted: May 20, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.91 MB (beats 23.88%)
"""

import re

RE_IPV4_LIKELY = re.compile(r'[0-9]{1,3}(?:\.[0-9]{1,3}){3}')
RE_IPV6 = re.compile(r'(?:[0-9a-f]{1,4})(?::[0-9a-f]{1,4}){7}', re.I)
NO_LEADING_ZEROES = re.compile(r'0|[1-9][0-9]*')

def isIPv4(ip: str) -> bool:
    if not RE_IPV4_LIKELY.fullmatch(ip):
        return False
    return all(0 <= int(n) <= 255 and NO_LEADING_ZEROES.fullmatch(n) for n in ip.split('.'))

def isIPv6(ip: str) -> bool:
    return bool(RE_IPV6.fullmatch(ip))

class Solution:
    def validIPAddress(self, queryIP: str) -> str:
        return (
            "IPv4" if isIPv4(queryIP) else (
                "IPv6" if isIPv6(queryIP) else "Neither"
            )
        )