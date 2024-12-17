/*
2095. Delete the Middle Node of a Linked List

Submitted: October 1, 2024

Runtime: 580 ms (beats 9.63%)
Memory: 299.72 MB (beats 80.28%)
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
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == nullptr) {
            return nullptr;
        }
        ListNode *slower = head;
        ListNode *fast = head->next->next;
        while (fast != nullptr && fast->next != nullptr) {
            slower = slower->next;
            fast = fast->next->next;
        }
        slower->next = slower->next->next;
        return head;
    }
};
