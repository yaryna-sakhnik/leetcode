/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

#include <unordered_set>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int a : nums) {
            if (seen.count(a)) {
                return true;
            }
            seen.insert(a);
        }
        return false;
        
    }
};
// @lc code=end

