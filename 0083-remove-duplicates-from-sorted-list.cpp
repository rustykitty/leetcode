/*
83. Remove Duplicates from Sorted List

Submitted: November 26, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 16.08 MB (beats 99.94%)
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr; // empty list
        if (head->next == nullptr) return head; // list with one item cannot have duplicates
        ListNode* p=head;
        while (p != nullptr && p->next != nullptr) {
            // while loop to account for multiple duplicates
            while (p->next != nullptr && p->next->val == p->val) { // p->next and p have same value
                p->next=p->next->next; // remove the node which p->next formerly referred to
            }
            p = p->next;
        }
        return head;
    }
};
