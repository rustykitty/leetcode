/*
1480. Running Sum of 1d Array

Submitted: October 18, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 11.16 MB (43.38%)
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* sums = malloc(sizeof (int) * numsSize);
    int sum = 0;
    for (int i = 0; i < numsSize; ++i) {
        sum += nums[i];
        sums[i] = sum;
    }
    return sums;
}