/*
1313. Decompress Run-Length Encoded List

Submitted: November 15, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 14.66 MB (beats 91.38%)
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    *returnSize = 0;
    int* end = nums + numsSize;
    int* p = nums;
    while (p != end) {
        *returnSize += *(p);
        p += 2;
    }
    int* returnArray = malloc(*returnSize << 2); // 32 bits = 4 bytes
    p = nums;
    int* r = returnArray;
    while (p != end) {
        int freq = *p;
        int val = *(++p);
        for (unsigned char i = 0; i < freq; ++i) {
            *r = val;
            ++r;
        }
        p++;
    }
    return returnArray;
}
