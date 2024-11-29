/*
1431. Kids With the Greatest Number of Candies

Submitted: November 4, 2024

Runtime: 0 ms (beats 100.00%)
Memory: 11.18 MB (beats 72.28%)
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max = 0;
        for ( const int& child : candies ) {
            if (child > max) max = child;
        }
        for ( const int& child : candies ) {
            result.push_back(child + extraCandies >= max);
        }
        return result;
    }
};