/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

#include <string>
#include <unordered_map>
#include <array>

using namespace std;

// @lc code=start
class Solution {
public:
    bool isAnagram(string &s, string &t) {
        if (s.size() != t.size()) {
            return false;
        }
        array<unsigned short, 26> ds = {}, dt = {};
        for (char ch : s) {
            ds[ch - 'a']++;
        }
        for (char ch : t) {
            dt[ch - 'a']++;
        }
        return ds == dt;
    }
};
// @lc code=end

