/*
206. Reverse Linked List

Submitted: October 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 13.06 MB (beats 40.91%)
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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;
        if (head->next == nullptr) return head;
        ListNode* new_head = head;
        while (head->next != nullptr) {
            ListNode* head_next = head->next;
            head->next = head_next->next;
            head_next->next = new_head;
            new_head = head_next;
        } // remove node after old "head" and add to front
        return new_head;
    }
};
