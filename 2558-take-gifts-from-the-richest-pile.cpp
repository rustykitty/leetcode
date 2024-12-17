/*
2558. Take Gifts From the Richest Pile

LeetCode Daily Question for December 12, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 13.26 MB (beats 36.35%)
*/

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq = { gifts.begin(), gifts.end() };
        for (int i = 0; i < k; ++i) {
            int temp = pq.top();
            pq.pop();
            pq.push(sqrt(temp));
        }
        long long sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};