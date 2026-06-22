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
    void reverseString(vector<char>& s)
    {
        reverse(s.begin(), s.end());
    }
};
// @leet end

int main()
{
    vector<char> test = {'a', 'b', 'c'};
    Solution{}.reverseString(test);
    for (char ch : test) {
        cout << ch;
    }
    cout << endl;
    return 0;
}
