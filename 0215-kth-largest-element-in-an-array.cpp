/**
215. Kth Largest Element in an Array

Submitted: Jan 14, 2026

Runtime: 31 ms (beats 58.50%)
Memory: 64.82 MB (beats 64.82%)
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for (const int n : nums) {
            pq.push(n);
        }
        for (int i = 0; i < k - 1; ++i) {
            pq.pop();
        }
        return pq.top();
    }
};