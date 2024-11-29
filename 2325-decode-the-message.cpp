/*
2325. Decode the Message

Submitted: November 28, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 9.70 MB (beats 48.84%)
*/

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> key_map = {{' ', ' '}};
        int i = 0;
        for ( const char& c : key ) {
            if (key_map.count(c) != 1) {
                key_map[c] = 97 + i;
                ++i;
            }
            if (i > 25) break;
        }
        for ( char& c : message ) {
            c = key_map[c];
        }
        return message;
    }
};