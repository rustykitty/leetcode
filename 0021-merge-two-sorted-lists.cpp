/*
21. Merge Two Sorted Lists

First solved: October 13, 2024
This solution: October 29, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 10.54 MB (beats 62.63%)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        ListNode* head = list1->val > list2->val ? list2 : list1;
        if (head == list1) list1 = list1->next;
        else list2 = list2->next;
        ListNode* tail = head;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val > list2->val) {
                tail->next = list2;
                list2 = list2->next;
            } else {
                tail->next = list1;
                list1 = list1->next;
            }
            tail = tail->next;
        }
        tail->next = list1 == nullptr ? list2 : list1;
        return head;
    }
};