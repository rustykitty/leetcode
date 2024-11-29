/*
1732. Find the Highest Altitude

Submitted: October 18, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 9.96 MB (beats 90.26%)
*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0;
        int current = 0;
        for (int i : gain) {
            current += i;
            if (current > max) {
                max = current;
            }
        }
        return max;
    }
};