// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution
{
    int m = 0;
    int ml = -1, mr = -1;

public:
    string longestPalindrome(const string &s)
    {
        FMP(0, 0, s);
        for (int r = 1; r < s.size(); ++r) {
            FMP(r, r, s);
            FMP(r - 1, r, s);
        }

        return s.substr(ml, mr - ml + 1);
    }

private:
    void FMP(int l, int r, const string &s)
    {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            --l;
            ++r;
        }
        ++l;
        --r;
        int len = r - l + 1;
        if (m < len) {
            m = len;
            ml = l;
            mr = r;
        }
    };
};
// @leet end
