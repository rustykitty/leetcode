/*
804. Unique Morse Code Words

Submitted: November 15, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 11.48 MB (beats 85.30%)
*/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> set;
        for (const string& word : words) {
            string s;
            for (const char& c : word) {
                s.append(c == 'a' ? ".-" :   // nested ternary operators
                         c == 'b' ? "-..." : // in place of map
                         c == 'c' ? "-.-." : 
                         c == 'd' ? "-.." : 
                         c == 'e' ? "." : 
                         c == 'f' ? "..-." : 
                         c == 'g' ? "--." : 
                         c == 'h' ? "...." : 
                         c == 'i' ? ".." : 
                         c == 'j' ? ".---" : 
                         c == 'k' ? "-.-" : 
                         c == 'l' ? ".-.." : 
                         c == 'm' ? "--" : 
                         c == 'n' ? "-." : 
                         c == 'o' ? "---" : 
                         c == 'p' ? ".--." : 
                         c == 'q' ? "--.-" : 
                         c == 'r' ? ".-." : 
                         c == 's' ? "..." : 
                         c == 't' ? "-" : 
                         c == 'u' ? "..-" : 
                         c == 'v' ? "...-" : 
                         c == 'w' ? ".--" : 
                         c == 'x' ? "-..-" : 
                         c == 'y' ? "-.--" : 
                         c == 'z' ? "--.." : 
                                    ""); // fail condition
            }
            set.emplace(s);
        }
        return set.size();
    }
};