/*
1920. Build Array from Permutation

Submitted: October 16, 2024

Runtime: 41 ms (beats 5.18%)
Memory: 14.69 MB（beats 31.98%)
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* returnArray = malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; ++i) {
        returnArray[i] = nums[nums[i]];
    }
    return returnArray;
}
