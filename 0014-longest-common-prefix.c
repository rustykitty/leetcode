/*
14. Longest Common Prefix

First submitted: September 30, 2024
This solution: November 25, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.03 MB (beats 55.00%)
*/

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 1) return *strs; // only one string
    char** strsEnd = strs + strsSize;
    // length of shortest string is longest possible prefix
    unsigned char len_shortest = 255;
    for (char** p = strs; p != strsEnd; ++p ) {
        unsigned char size = 0;
        for (char* q = *p; *q != '\0'; ++q, ++size) ;
        if (size < len_shortest) len_shortest = size;
    }
    char* prefix = calloc(len_shortest + 1, sizeof(char));
    for (unsigned char i = 0; i < len_shortest; i++) {
        for (char** p = strs; p != strsEnd; ++p ) {
            char* str = *p;
            // not equal, prefix ends here
            if (str[i] != strs[0][i]) return prefix;
        }
        prefix[i] = strs[0][i];
    }
    return prefix;
}
