/*
1346. Check If N and Its Double Exist

Leetcode Daily Question for December 1, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 13.52 MB (beats 18.52%)
*/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unsigned short n = arr.size();
        for (unsigned short i = 0; i < n; ++i) {
            for (unsigned short j = 0; j < n; ++j) {
                if (i == j) continue;
                if (arr[i] == 2 * arr[j]) return true;
            }
        }
        return false;
    }
};