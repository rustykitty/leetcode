/*
21. Merge Two Sorted Lists

First solved: October 13, 2024
This solution: November 24, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 10.54 MB (beats 62.63%)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;
    struct ListNode* head = list1->val > list2->val ? list2 : list1;
    if (head == list1) list1 = list1->next;
    else list2 = list2->next;
    struct ListNode* tail = head;
    while (list1 != NULL && list2 != NULL) {
        if (list1->val > list2->val) {
            tail->next = list2;
            list2 = list2->next;
        } else {
            tail->next = list1;
            list1 = list1->next;
        }
        tail = tail->next;
    }
    tail->next = list1 == NULL ? list2 : list1;
    return head;
}
