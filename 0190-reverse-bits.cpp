/*
190. Reverse Bits

Submitted: October 16, 2024

Runtime: 4 ms (beats 35.79%)
Memory: 7.29 MB (beats 85.69%)
*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (unsigned char i = 0; i != 32; ++i, n >>= 1) {
            result <<= 1;
            result += (n&1);
        }
        return result;
    }
};