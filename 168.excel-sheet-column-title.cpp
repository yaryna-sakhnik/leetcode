/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

// @lc code=start

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        while (columnNumber != 0) {
            --columnNumber;
            int d = columnNumber % 26;
            res.push_back('A' + d);
            columnNumber /= 26;
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

int main()
{
    cout << Solution{}.convertToTitle(701) << endl;
}