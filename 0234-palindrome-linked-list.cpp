/*
234. Palindrome Linked List

Submitted: January 17, 2025

Runtime: 6 ms (beats 35.32%)
Memory: 132.08 MB (beats 14.40%)
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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        for (; head != nullptr; head = head->next) {
            v.push_back(head->val);
        }
        auto forward = v.cbegin();
        auto backward = v.crbegin();
        while (forward != v.cend()) {
            if (*forward++ != *backward++) return false;
        }
        return true;
    }
};