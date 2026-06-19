// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

#include <iostream>

// @leet start
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0) {
            return false;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};
// @leet end

int main()
{
    cout << Solution().isPowerOfThree(45) << endl;
    return 0;
}
