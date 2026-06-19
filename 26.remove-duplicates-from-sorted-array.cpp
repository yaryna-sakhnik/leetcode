/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */
#include <vector>
#include <iostream>

using namespace std;

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int w = 0;
        for (int r = 0; r != nums.size(); ++r) {
            if (nums[r] != nums[w]) {
                nums[++w] = nums[r];
            }
        }
        return w + 1;
    }
};
// @lc code=end

int main()
{
    vector<int> a = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    auto k =Solution().removeDuplicates(a);
    cout << k << '\n';
    for (int i = 0; i < k; ++i)
        cout << ' ' << a[i];
    cout << endl;
    return 0;
}
