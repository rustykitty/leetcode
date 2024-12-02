/*
14. Longest Common Prefix

First solved: September 30, 2024
This solution: November 24, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 11.06 MB (beats 91.10%)
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0]; // only one string
        string prefix = "";
        unsigned char len_shortest(255);
        // length of shortest string is longest possible prefix
        for ( const auto& str : strs ) {
            if (str.size() < len_shortest) len_shortest = str.size();
        }
        for (unsigned char i = 0; i < len_shortest; i++) {
            for ( const auto& str : strs ) {
                // this means that the prefix ends here
                if ( str[i] != strs.front()[i] ) return prefix;
            }
            prefix += strs.front()[i];
        }
        return prefix;
    }
};
