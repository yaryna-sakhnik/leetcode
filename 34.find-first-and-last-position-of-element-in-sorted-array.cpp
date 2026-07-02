// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution
{
public:
    vector<int> searchRange(const vector<int>& nums, int target)
    {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if (it == nums.end() || *it > target)
            return {-1, -1};
        int left = it - nums.begin();
        auto it2 = upper_bound(it + 1, nums.end(), target);
        if (it2 == nums.end())
            return {left, static_cast<int>(nums.size() - 1)};
        return {left, static_cast<int>(it2 - nums.begin()) - 1};
    }
};
// @leet end
