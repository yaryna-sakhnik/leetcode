/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */
#include <numeric>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0, [](int a, int i) { return a ^ i; });
    }
};
// @lc code=end

