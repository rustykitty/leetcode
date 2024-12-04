/*
2011. Final Value of Variable After Peforming Operations

Submitted: November 21, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 18.14 MB (beats 12.42%)
*/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        signed char result = 0; // constraints limit length of operations to 100
        for (const string& op : operations) {
            if (op == "--X" || op == "X--") --result;
            else if (op == "++X" || op == "X++") ++result;
        }
        return result;
    }
};
