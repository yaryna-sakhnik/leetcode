/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string const &s, string const &t)
    {
        return Impl(s, t) && Impl(t, s);
    }

private:
    bool Impl(string const &s, string const &t)
    {
        unordered_map<char, char> d;

        for (int i = 0; i < t.size(); ++i) {
            if (d.count(s[i])) {
                if (t[i] != d[s[i]]) {
                    return false;
                }
            } else {
                d[s[i]] = t[i];
            }
        }
        return true;
    }
};
// @lc code=end

int main()
{
    cout << Solution{}.isIsomorphic("badc", "baba") << endl;
    return 0;
}