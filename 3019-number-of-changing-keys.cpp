/*
3019. Number of Changing Keys

Submitted: December 4, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.94 MB (beats 13.66%)
*/

#define getKey(c) (c >= 'a' ? c - 'a' : c - 'A')

class Solution {
public:
    int countKeyChanges(string s) {
        uint8_t i = getKey(s.front());
        uint8_t res = 0;
        for (const char& c : s) {
            if (getKey(c) != i) {
                res++;
                i = getKey(c);
            }
        }
        return res;
    }
};
