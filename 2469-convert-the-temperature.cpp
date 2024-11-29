/*
2469. Convert the Temperature

Submitted: October 5, 2024

Runtime: 3 ms (beats 100.00%)
Memory: 7.72 MB (beats 85.28%)
*/

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return vector<double> {celsius + 273.15, celsius * 1.80 + 32.00};
    }
};