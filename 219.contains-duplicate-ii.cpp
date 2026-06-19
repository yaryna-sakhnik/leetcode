/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int> const &nums, int k) {
        unordered_set<int> seen;
        seen.reserve(k);
        for (int i = 0; i < nums.size(); ++i) {
            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }
            seen.insert(nums[i]);
            if (i >= k) {
                seen.erase(nums[i - k]);
            }
        }
        return false;
    }
};
// @lc code=end

int main()
{
    cout << Solution{}.containsNearbyDuplicate({1, 0, 1, 1}, 1) << endl;
    return 0;
}
