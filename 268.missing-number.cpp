/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

#include <vector>
#include <numeric>

using namespace std;

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size() * (nums.size() + 1) / 2;
        int sum1 = accumulate(nums.begin(), nums.end(), 0);
        return sum - sum1;
    }
};
// @lc code=end

