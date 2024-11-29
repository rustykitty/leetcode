/*
2124. Check if All A's Appears Before All B's

Submitted: November 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 7.57 MB (beats 93.33%)
*/

bool checkString(char* s) {
    char* p = s;
    for (; *p != 'b' && *p != '\0'; ++p) {}
    for (; *p != '\0'; ++p) {
        if (*p == 'a') return false;
    }
    return true;
}