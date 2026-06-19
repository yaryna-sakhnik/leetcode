/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

#include <vector>
#include <algorithm>

using namespace std;

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto it = remove(nums.begin(), nums.end(), 0);
        fill(it, nums.end(), 0);
    }
};
// @lc code=end

