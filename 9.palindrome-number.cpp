/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */


// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long rev = 0;
        for (int y = x; y > 0; y /= 10) {
            rev = rev * 10 + y % 10;
        }
        return x == rev;
    }
};
// @lc code=end

