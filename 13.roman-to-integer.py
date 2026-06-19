#
# @lc app=leetcode id=13 lang=python3
#
# [13] Roman to Integer
#

# @lc code=start

DIGITS = { 'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000 }

class Solution:
    def romanToInt(self, s: str) -> int:
        n = 0
        for i, a in enumerate(s):
            va = DIGITS.get(a)
            vb = DIGITS.get(s[i + 1]) if i + 1 != len(s) else 0
            n += va if va >= vb else -va
        return n
# @lc code=end


print(Solution().romanToInt("XIX"))