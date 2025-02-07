/*
704. Binary Search

Submitted: January 31, 2025

Runtime: 0 ms (beats 100.00%)
Memory: 31.24 MB (beats 79.81%)
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min = 0, max = nums.size() - 1;
        int mid;
        auto arr = nums.data();
        while (min <= max) {
            mid = (max + min) / 2;
            if (arr[mid] == target) return mid;
            else if (arr[mid] < target) min = mid + 1;
            else if (arr[mid] > target) max = mid - 1;
        }
        return -1;
    }
};
