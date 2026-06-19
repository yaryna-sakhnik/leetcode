// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

#include <vector>

using namespace std;

// @leet start
class Solution
{
public:
    string convert(const string &s, int numRows)
    {
        if (numRows == 1) {
            return s;
        }
        vector<string> rows(numRows);
        int r = 0;
        int dr = 1;
        for (char ch : s) {
            rows[r].push_back(ch);
            r += dr;
            if (r == 0 || r == numRows - 1)
                dr = -dr;
        }

        string res;
        res.reserve(s.size());
        for (auto &rs : rows) {
            res += rs;
        }
        return res;
    }
};
// @leet end

int main()
{
    cout << Solution{}.convert("AB", 1) << endl;
    return 0;
}
