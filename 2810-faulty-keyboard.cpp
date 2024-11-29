/*
2810. Faulty Keyboard

Submitted: November 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 9.74 MB (beats 72.83%)
*/

class Solution {
public:
    string finalString(string s) {
        string result;
        for ( const char& c : s ) {
            if (c == 'i') reverse(result.begin(), result.end());
            else result.push_back(c);
        }
        return result;
    }
};