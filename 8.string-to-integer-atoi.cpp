// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

using namespace std;

// @leet start
class Solution {
public:
    int myAtoi(string s)
    {
        int i = 0;
        while (i < s.size() && s[i] == ' ') {
            ++i;
        }
        if (i == s.size()) {
            return 0;
        }
        int sign = 1;
        if (s[i] == '-') {
            sign = -1;
            ++i;
        } else if (s[i] == '+') {
            sign = 1;
            ++i;
        }

        long long acc = 0;
        while (i < s.size() && isdigit(static_cast<unsigned char>(s[i]))) {
            acc = acc * 10 + (s[i] - '0');

            if (sign * acc > INT_MAX)
                return INT_MAX;
            if (sign * acc < INT_MIN)
                return INT_MIN;

            ++i;
        }
        return sign * acc;
    }
};
// @leet end

int main()
{
    cout << Solution{}.myAtoi("42") << endl;
    cout << Solution{}.myAtoi("   -042") << endl;
    cout << Solution{}.myAtoi("1337c0d3") << endl;
    cout << Solution{}.myAtoi("0-1") << endl;
    cout << Solution{}.myAtoi("words and 987") << endl;
    return 0;
}
