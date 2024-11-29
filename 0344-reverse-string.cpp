/*
344. Reverse String

Submitted: October 7, 2024

Runtime: 115 ms (beats 6.88%)
Memory: 27.38 MB (beats 18.77%)
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0; i < s.size(); ++i ) {
            s.insert(s.begin() + i, (char) s.back());
            s.pop_back();
        }
    }
};