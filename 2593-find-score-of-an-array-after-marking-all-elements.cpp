/*
2593. Find Score of an Array After Marking All Elements

LeetCode Daily Question for December 13, 2024

Runtime: 204 ms (beats 28.68%)
Memory: 143.70 MB (beats 18.41%)
*/

class Solution {
public:
    long long findScore(vector<int>& nums) {
        unordered_set<int> marked;
        vector<pair<int, int>> sorted_nums;
        sorted_nums.reserve(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            sorted_nums.push_back({ i, nums[i] });
        }
        sort(sorted_nums.begin(), sorted_nums.end(), [](pair<int, int> x, pair<int, int> y){
            return  x.second < y.second ? true :
                   x.second == y.second ? x.first < y.first :
                                          false;
        });
        long long score = 0;
        for (const pair<int, int>& p : sorted_nums) {
            if (marked.count(p.first)) continue;
            score += p.second;
            marked.insert(p.first);
            if (p.first > 0) marked.insert(p.first - 1);
            if (p.first < nums.size()) marked.insert(p.first + 1);

        }
        return score;
    }
};