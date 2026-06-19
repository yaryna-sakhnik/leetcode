
#include <vector>
#include <string>
#include <iostream>

using namespace std;
/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(const vector<string>& strs) {
        string pref;
        for (int i = 0; i < strs[0].size(); ++i) {
            for (auto &s : strs) {
                if (s.size() == i || s[i] != strs[0][i]) {
                    return pref;
                }
            } 
            pref += strs[0][i];
        }
        return pref;
    }
};
// @lc code=end

int main()
{
    cout << Solution{}.longestCommonPrefix({"asdf", "a"}) << endl;
    return 0;
}