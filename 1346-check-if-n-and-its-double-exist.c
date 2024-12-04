/*
1346. Check If N and Its Double Exist

Leetcode Daily Question for December 1, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 8.32 MB (beats 36.07%)
*/

bool checkIfExist(int* arr, int arrSize) {
    for (unsigned short i = 0; i < arrSize; ++i) {
        for (unsigned short j = 0; j < arrSize; ++j) {
            if (i == j) continue;
            if (arr[i] == 2 * arr[j]) return true;
        }
    }
    return false;
}
