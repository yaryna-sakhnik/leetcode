/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 1);
        if (!rowIndex) {
            return res;
        }
        auto row = res;
        for (int i = 0; i < rowIndex; ++i) {
            for (int j = 1; j <= i; ++j) {
                row[j] = res[j - 1] + res[j];
            }
            res.swap(row);
        } 
        return res;
    }
};
// @lc code=end

