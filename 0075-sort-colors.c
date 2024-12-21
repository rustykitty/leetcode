/*
75. Sort Colors

Submitted: December 20, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 9.70 MB (beats 68.92%)
*/

void sortColors(int* nums, int numsSize) {
    int count[3] = { 0, 0, 0 };
    for (int* p = nums, *end = (nums + numsSize); p != end; ++p) {
        count[*p]++;
    }
    int* p = nums;
    for (int i = 0; i < count[0]; ++i) {
        *p++ = 0;
    }
    for (int i = 0; i < count[1]; ++i) {
        *p++ = 1;
    }
    for (int i = 0; i < count[2]; ++i) {
        *p++ = 2;
    }
}