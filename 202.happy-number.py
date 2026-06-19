#
# @lc app=leetcode id=202 lang=python3
#
# [202] Happy Number
#

# @lc code=start
class Solution:
    def isHappy(self, n: int) -> bool:
        seen = {n}
        while n != 1:
            a = 0
            for ch in str(n):
                r = int(ch)
                a += r * r
            n = a
            if n in seen:
                return False
            seen.add(n)
        return True               
# @lc code=end

