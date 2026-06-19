/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int n)
    {
        while (n > 9) {
            n = SumDigits(n);
        }
        return n;
    }

private:
    int SumDigits(int n)
    {
        int count = 0;
        while (n != 0) {
            count = count + n % 10;
            n /= 10;
        }
        return count;
    }
};
// @lc code=end

