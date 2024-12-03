"""
141. Linked List Cycle

First submitted: January 16, 2022
Last submitted: September 30, 2024
Submitted: September 26, 2024

Runtime: 40 ms (beats 83.76%)
Memory: 19.15 MB (beats 33.41%)
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow is fast:
                return True
        return False
