"""
2. Add Two Numbers

Submitted: October 21, 2025

Runtime: 6 ms (beats 32.71%)
Memory: 18.20 MB (beats 45.96%)
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def list_iter(p: ListNode):
    while p:
        yield p.val
        p = p.next

def iter_to_number(it):
    it = iter(it)
    n = 0
    for digit in it:
        n *= 10
        n += digit
    return n

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ll1 = tuple(list_iter(l1))[::-1]
        ll2 = tuple(list_iter(l2))[::-1]
        n1 = iter_to_number(ll1)
        n2 = iter_to_number(ll2)
        n3 = n1 + n2
        resl = []
        if n3 == 0:
            return ListNode()
        else:
            while n3 != 0:
                resl.append(n3 % 10)
                n3 //= 10
        head = ListNode(resl[0])
        prev = head
        tail: ListNode
        for n in resl[1:]:
            tail = ListNode(n)
            prev.next = tail
            prev = tail
        return head