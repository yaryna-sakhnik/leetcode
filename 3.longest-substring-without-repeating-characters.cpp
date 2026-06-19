/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

#include <string>
#include <iostream>

using namespace std;

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(const string &s)
    {
        int b = 0;
        int best = 0;
        for (int e = 0; e < s.size(); ++e) {
            for (int i = b; i < e; ++i) {
                if (s[i] == s[e]) {
                    b = i + 1;
                    break;
                }
            }
            best = max(e - b + 1, best);
        }
        return best;
    }
};
// @lc code=end

int main()
{
    cout << Solution{}.lengthOfLongestSubstring("abcabcbb") << endl;
    return 0;
}