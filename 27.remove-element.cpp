/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto k = 0;
        for (int v : nums) {
            if (v != val) {
                nums[k++] = v;
            }
        }
        return k;
    }
};
// @lc code=end

int main()
{
    std::string line;
    while (getline(cin, line)) {
        std::vector<int> nums;
        std::istringstream iss{line};
        int v;
        while (iss >> v) {
            nums.push_back(v);
        }

        int val = nums.back();
        nums.pop_back();

        int k = Solution{}.removeElement(nums, val);
        cout << k << "\n";
        for (int i = 0; i < k; ++i) {
            cout << ' ' << nums[i];
        }
        cout << endl;
    }
    return 0;
}