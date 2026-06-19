/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses

 */

#include <string>
#include <stack>
#include <vector>

using namespace std;

// @lc code=start
class Solution
{
public:
    bool isValid(const string &s)
    {
      stack<char, vector<char>> st;
      for (auto ch : s) {
        if (ch == '{' || ch == '[' || ch == '(') {
            st.push(ch);
        } else if (ch == '}' || ch == ']' || ch == ')') {
            if (st.size() == 0) {
                return false;
            }
            char p = st.top();
            st.pop();
            if (ch == '}' && p != '{' || ch == ']' && p != '[' || ch == ')' && p != '(' ) {
                return false;
            }
        }
      }
      return st.empty();
    }
};
// @lc code=end

