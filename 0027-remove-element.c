/*
27. Remove Element

Submitted: October 21, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 9.97 MB (beats 11.38%)
*/

int removeElement(int* nums, int numsSize, int val) {
    if (numsSize == 0) return 0;
    else if (numsSize == 1) return nums[0] != val;
    int newSize = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] != val) {
            nums[newSize] = nums[i];
            ++newSize;
        }
    }
    return newSize;
}
