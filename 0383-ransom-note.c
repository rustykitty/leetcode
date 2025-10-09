/*
383. Ransom Note

Submitted: September 24, 2025

Runtime: 0 ms (beats 100.00%)
Submitted: 8.82 MB (beats 32.44%)
*/

bool canConstruct(char* ransomNote, char* magazine) {
    if (strlen(ransomNote) > strlen(magazine)) {
        return false;
    }
    int r[26] = {};
    int m[26] = {};
    for (const char* p = ransomNote; *p != '\0'; ++p) {
        r[*p - 'a']++;
    }
    for (const char* p = magazine; *p != '\0'; ++p) {
        m[*p - 'a']++;
    }
    for (unsigned char i = 0; i < 26; ++i) {
        if (r[i] > m[i]) {
            return false;
        }
    }
    return true;
}