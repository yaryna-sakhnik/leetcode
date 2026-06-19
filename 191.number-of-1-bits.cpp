/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
#include <bitset>

class Solution
{
public:
    int hammingWeight(int n)
    {
        std::bitset<32> b(n);
        return b.count();
    }
};
// @lc code=end

int main()
{
    return Solution().hammingWeight(11);    
} 

