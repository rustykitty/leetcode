/*
3019. Number of Changing Keys

Submitted: October 29, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.72 MB (beats 32.20%)
*/

class Solution {
public:
    int countKeyChanges(string s) {
        unsigned char i = getI(s.front());
        unsigned char res = 0;
        for (const char& c : s) {
            if (getI(c) != i) {
                res++;
                i = getI(c);
            }
        }
        return res;
    }
    unsigned char getI(char c) {
        return c >= 'a' ? c - 'a' : c - 'A';    
    }
};