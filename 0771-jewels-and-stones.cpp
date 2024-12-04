/*
771. Jewels and Stones

Submitted: October 18, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.56 MB (beats 26.93%)
*/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> j;
        for (char jewel : jewels) {
            j.insert(jewel);
        }
        int res = 0;
        for (char stone : stones) {
            res += j.count(stone);
        }
        return res;
    }
};
