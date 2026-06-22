/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */
#include <string>
#include <iostream>

using namespace std;

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(const string &s) {
        // Find the end
        int i = s.size() - 1;
        while (s[i] == ' ') {
            --i;
        }
        int end = i;
        while (i >= 0 && s[i] != ' ') {
            --i;
        }
        return end - i;
    }
};
// @lc code=end

int main()
{
    std::string line = "hello";
    //while (getline(cin, line)) {
        cout << Solution{}.lengthOfLastWord(line) << endl;
    //}
    return 0;
}