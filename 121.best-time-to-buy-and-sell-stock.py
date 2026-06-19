#
# @lc app=leetcode id=121 lang=python3
#
# [121] Best Time to Buy and Sell Stock
#

from typing import List

# @lc code=start

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mn = 100000
        mp = 0
        for p in prices:
            if p < mn:
                mn = p
            else:
                mp = max(p - mn, mp)
        return mp
# @lc code=end

