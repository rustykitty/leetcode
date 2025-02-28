/*
1929. Concatenation of Array

Submitted: February 25, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 14.39 MB (beats 60.45%)
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    nums = realloc(nums, numsSize * sizeof(int) * 2);
    *returnSize = numsSize * 2;
    for (int i = 0; i < numsSize; ++i) nums[i + numsSize] = nums[i];
    return nums;
}