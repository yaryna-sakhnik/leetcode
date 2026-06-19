/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution
{
public:
    int next(int n)
    {
        int sum = 0;
        while (n) {
            int d = n % 10;
            n /= 10;
            sum += d * d;
        }
        return sum;
    }

    bool isHappy(int n)
    {
        int slow = n;
        int fast = next(n);

        while (fast != 1 && slow != fast) {
            slow = next(slow);
            fast = next(next(fast));
        }

        return fast == 1;
    }
};
// @lc code=end

