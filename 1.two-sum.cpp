#include <vector>
#include <unordered_map>

using namespace std;

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(const vector<int>& nums, int target)
    {
        std::unordered_map<int, int> available;
        for (int i = 0; i < nums.size(); ++i) {
            int a = target - nums[i];
            auto it = available.find(a);
            if (it != available.end() && it->second != i) {
                return {i, it->second};
            }
            available[nums[i]] = i;
        }
        return {};
        
    }
};
// @lc code=end

