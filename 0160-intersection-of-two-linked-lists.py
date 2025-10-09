"""
160. Intersection of Two Linked Lists

Submitted: May 31, 2025

Runtime: 84 ms (beats 62.92%)
Memory: 27.87 MB (beats 45.04%)
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

def get_nodes(head):
    while head:
        yield head
        head = head.next

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        if not headA or not headB: return None
        listA = list(get_nodes(headA))
        listB = list(get_nodes(headB))
        if listA[-1] is not listB[-1]: return None
        if len(listA) < len(listB):
            listA, listB = listB, listA
        for (a, b) in zip(listA[len(listA) - len(listB):], listB):
            if a is b: return a