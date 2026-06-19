// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int res = 0;
        for (char ch : columnTitle) {
            res = res * 26 + (ch - 'A') + 1;
        }
        return res;
    }
};
// @leet end
