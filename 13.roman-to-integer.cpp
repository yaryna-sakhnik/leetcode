/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <string>
#include <unordered_map>

using namespace std;

const unordered_map<char, int> M = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
}; 

class Solution {
public:
    int romanToInt(string s)
    {
        int sum = 0;
        for (int i = 0; i < s.size(); ++i) {
            auto v = M.at(s[i]);
            if (i + 1 < s.size() && v < M.at(s[i+1])) {
                sum -= v;
            } else {
                sum += v;
            }
        }
        return sum;
    }
};
// @lc code=end

