// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution
{
public:
    int reverse(int x)
    {
        long long acc = 0;
        int d = 0;
        while (x) {
            d = x % 10;
            x /= 10;
            acc *= 10;
            acc += d;
        }
        if (acc > 0x7fffffff || -acc - 1 > 0x7fffffff)
            return 0;
        return acc;
    }
};
// @leet end
