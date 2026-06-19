/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

#include <string>
#include <iostream>

using namespace std;
// @lc code=start
class Solution {
public:
    int strStr(const string &haystack, const string &needle) {
        auto pos = haystack.find(needle);
        return pos != haystack.npos ? pos : -1;
    }
};
// @lc code=end

int main()
{
    while (true) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        cout << Solution{}.strStr(s1, s2) << endl;
    }
    return 0;
}