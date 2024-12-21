/*
147. Insertion Sort List

Submitted: December 20, 2024

Runtime: 43 ms (beats 5.75%)
Memory: 14.59 MB (beats 65.76%)
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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* newHead = head;
        head = head->next;
        newHead->next = nullptr;
        while (head != nullptr) {
            cout << head->val;
            ListNode* node = head;
            head = head->next;
            ListNode* p = newHead;
            if (node->val < newHead->val) {
                node->next = newHead;
                newHead = node;
            }
            else {
                for (; p->next != nullptr && p->next->val < node->val; p = p->next) ;
                node->next = p->next;
                p->next = node;
            }
        }
        return newHead;
    }
};