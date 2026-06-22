// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution
{
public:
    string intToRoman(int num)
    {
        static const pair<int, const char *> R[] = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"},
            {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        int i = 0;
        string res;
        for (int i = 0; num && i < std::size(R); ++i) {
            while (num >= R[i].first) {
                num -= R[i].first;
                res += R[i].second;
            }
        }
        
        return res;
    }

private:
};
// @leet end

int main()
{
    int n;
    while (cin >> n) {
        cout << Solution{}.intToRoman(n) << endl;
    }
    return 0;
}
