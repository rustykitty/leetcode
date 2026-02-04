"""
24. Swap Nodes in Pairs

Submitted: February 3, 2026

Runtime: 0 ms (beats 100.00%)
Memory: 19.35 MB (beats 32.52%)
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return None
        elif not head.next:
            return head
        # swap first and second
        a, b, c = head, head.next, head.next.next
        b.next = a
        a.next = self.swapPairs(c)
        return b