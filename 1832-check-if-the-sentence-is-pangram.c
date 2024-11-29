/*
1832. Check if the Sentence is Pangram

Submitted: November 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.08 MB (beats 15.97%)
*/

bool checkIfPangram(char* sentence) {
    bool has_appeared[26] = { false };
    while (*sentence != '\0') {
        char c = *sentence;
        if (!has_appeared[c - 'a']) has_appeared[c - 'a'] = true;
        sentence++;
    }
    bool *end = has_appeared + 26;
    for (bool *start = has_appeared; start != end; ++start) {
        if (!*start) return false;
    }
    return true;
}