/*
3248. Snake in Matrix

Submitted: January 17, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 34.90 MB (beats 43.05%)
*/

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int pos = 0;
        for (const string& cmd : commands) {
            pos += cmd == "UP"    ? -n : 
                   cmd == "RIGHT" ? 1 :
                   cmd == "DOWN"  ? n :
                   cmd == "LEFT"  ? -1 : 0;
        }
        return pos;
    }
};