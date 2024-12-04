/*
709. To Lower Case

Submitted: November 28, 2024

Runtime: 0 ms (100.00%)
Memory: 7.92 MB (beats 29.18%)
*/

char* toLowerCase(char* s) {
    for (char* p = s; *p != '\0'; ++p) {
        if ('A' <= *p && *p <= 'Z') *p = *p + 32;
    }
    return s;
}
