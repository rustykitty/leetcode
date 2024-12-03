"""
203. Remove Linked List Elements

First submitted: December 31, 2021
This solution: November 27, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 19.56 MB (beats 12.16%)
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        dummy = ListNode(next=head) # in case we need to remove the head
        p = dummy
        while p:
            while p.next and p.next.val == val:
                p.next = p.next.next
            p = p.next
        return dummy.next
