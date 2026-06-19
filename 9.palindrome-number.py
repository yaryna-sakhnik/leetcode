#
# @lc app=leetcode id=9 lang=python3
#
# [9] Palindrome Number
#

# @lc code=start
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        r = 0
        n = x
        while n != 0:
            d = n % 10
            n //= 10
            r = r * 10 + d
        return x == r
# @lc code=end

s1 = Solution()
s2 = Solution()
print(s1.isPalindrome(121))
print(s2.isPalindrome(1234))