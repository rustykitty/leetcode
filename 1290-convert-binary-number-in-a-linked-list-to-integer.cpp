/*
1290. Convert Binary Number in a Linked List to Integer

Submitted: October 4, 2024

Runtime: 4 ms (beats 100.00%)
Memory: 9.76 MB (beats 99.55%)
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
    int getDecimalValue(ListNode* head) {
        int res = 0;
        while (head != nullptr) {
            res <<= 1;
            res += head->val;
            head = head->next;
        }
        return res;
    }
};