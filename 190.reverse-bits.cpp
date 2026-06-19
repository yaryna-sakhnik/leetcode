/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    int reverseBits(int n) {
        int a = 0;
        for (int i = 0; i < 32; ++i) {
            auto v = n & 1;
            n >>= 1;
            a <<= 1;
            a |= v;
        }
        return a;
    }
};
// @lc code=end

