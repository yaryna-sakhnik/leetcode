// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imp9orts end

// @leet start
class Solution
{
public:
    vector<vector<int>> threeSum(const vector<int> &nums)
    {
        using TripletT = array<int, 3>;
        set<TripletT> triplets;

        for (int i = 0; i < nums.size(); ++i) {
            std::unordered_set<int> seen;
            for (int j = i + 1; j < nums.size(); ++j) {
                int target = -(nums[i] + nums[j]);
                if (seen.count(target)) {
                    TripletT t = {nums[i], nums[j], target};
                    sort(t.begin(), t.end());
                    triplets.insert(t);
                }
                seen.insert(nums[j]);
            }
        }

        vector<vector<int>> res;
        for (const auto &t : triplets) {
            res.push_back({t[0], t[1], t[2]});
        }
        return res;
    }
};
// @leet end
