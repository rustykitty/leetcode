"""
468. Validate IP Address

Submitted: June 18, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 17.70 MB (beats 75.75%)
"""

import re

RE_IPV4 = re.compile(r'^((25[0-5]|(2[0-4]|1\d|[1-9]|)\d)\.?\b){4}$')
RE_IPV6 = re.compile(r'(?:[0-9a-f]{1,4})(?::[0-9a-f]{1,4}){7}', re.I)

IPv4 = "IPv4"
IPv6 = "IPv6"
Neither = "Neither"

class Solution:
    def validIPAddress(self, queryIP: str) -> str:
        return (
            IPv4 if RE_IPV4.fullmatch(queryIP) else (
                IPv6 if RE_IPV6.fullmatch(queryIP) else Neither
            )
        )