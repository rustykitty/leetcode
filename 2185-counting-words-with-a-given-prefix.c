/*
2185. Counting Words with a Given Prefix

LeetCode Daily Question for January 9, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 8.86 
*/

int prefixCount(char** words, int wordsSize, char* pref) {
    int res = 0;
    int pref_len = strlen(pref); // get length of prefix
    for (int i = 0; i < wordsSize; ++i) {
        // compare prefix with first pref_len characters of each word
        res += (strncmp(words[i], pref, pref_len) == 0);
    }
    return res;
}
