// @leet imports start
#include <bits/stdc++.h>
#include <string>

using namespace std;
// @leet imports end


// @leet start
class Solution
{
public:
    vector<string> letterCombinations(const string &digits)
    {
        vector<string> strs = {};
        Comb(0, "", digits, strs);
        return strs;
        //vector<string> strs = {""};
        //for (char d : digits) {
        //    vector<string> strs2;
        //    for (const auto &s : strs) {
        //        for (char ch : M[d - '0']) {
        //            strs2.push_back(s + ch);
        //        }
        //    }
        //    strs.swap(strs2);
        //}
        //return strs;
    }

private:
    static constexpr const string_view M[] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

    void Comb(int i, std::string pref, const std::string &digits, vector<string> &out)
    {
        if (i == digits.size()) {
            out.push_back(std::move(pref));
            return;
        }

        for (char ch : M[digits[i] - '0']) {
            Comb(i + 1, pref + ch, digits, out);
        }
    }
};
// @leet end

int main()
{
    for (const auto &s : Solution{}.letterCombinations("23")) {
        cout << ' ' << s << endl;
    }
    return 0;
}


