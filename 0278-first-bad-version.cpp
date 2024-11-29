/*
278. First Bad Version

Runtime: 1301 ms (beats 5.33%)
Memory: 7.58 MB (beats 62.02%)
*/

// O(n) intuition solution

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        while(isBadVersion(n)) n--;
        return n + 1;
    }
};