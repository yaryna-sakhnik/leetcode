// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution
{
public:
    int divide(long long dividend, long long divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool negative = (dividend > 0) != (divisor > 0);

        int a = dividend > 0 ? -dividend : dividend;
        int b = divisor > 0 ? -divisor : divisor;

        int quotient = 0;

        while (a <= b) {
            int value = b;
            int multiple = -1;

            while (value >= (INT_MIN >> 1) && a <= value + value) {
                value += value;
                multiple += multiple;
            }

            a -= value;
            quotient += multiple;
        }

        if (!negative) {
            return -quotient;
        }

        return quotient;
    }
};
// @leet end

int main()
{

    cout << Solution{}.divide(-2147483648, -1) << endl;
    return 0;
}
