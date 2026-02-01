/**
2. Add Two Numbers

Submitted: Feb 01, 2026

Runtime: 6 ms (beats 8.82%)
Memory: 77.92 MB (beats 77.92%)
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        vector<int> v1, v2, v3;
        
        for (auto p = l1; p != nullptr; p = p->next) {
            v1.push_back(p->val);
        }
        for (auto p = l2; p != nullptr; p = p->next) {
            v2.push_back(p->val);
        }

        int n = v1.size(), m = v2.size();
        int digits = max(n, m);
        v1.resize(digits);
        v2.resize(digits);

        for (int i = 0; i < digits; ++i) {
            // cout << v1[i] << ' ' << v2[i] << '\n';
            int add = v1[i] + v2[i] + carry;
            int digit = add % 10;
            carry = add / 10;
            // cout << add << ' ' << digit << ' ' << carry << '\n';
            v3.push_back(digit);
        }

        ListNode* res = digits == n ? l1 : l2;
        {
            ListNode* p = digits == n ? l1 : l2;
            for (int i = 0; i < digits; ++i) {
                // cout << p << ' ' << p->next << ' ';
                p->val = v3[i];
                p = p->next;
            }
        }

        if (carry > 0) {
            // v3.push_back(carry);
            ListNode* end;
            ListNode* p = digits == n ? l1 : l2;
            while (p->next != nullptr) {
                p = p->next;
            }
            end = p;
            p = new ListNode(carry);
            end->next = p;
        }
        
        return res;
    }
};