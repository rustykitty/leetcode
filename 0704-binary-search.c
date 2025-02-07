/*
704. Binary Search

Submitted: January 31, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 9.40 MB (beats 30.03%)
*/

int search(int* nums, int numsSize, int target) {
    int min = 0, max = numsSize - 1;
    int mid;
    while (min <= max) {
        mid = (max + min) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) min = mid + 1;
        else if (nums[mid] > target) max = mid - 1;
    }
    return -1;
}
