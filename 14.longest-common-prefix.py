#
# @lc app=leetcode id=14 lang=python3
#
# [14] Longest Common Prefix
#

from typing import List

# @lc code=start

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        a = ""
        for i, ch in enumerate(strs[0]):
            for s in strs:
                if len(s) == i or s[i] != ch:
                    return a
            a += ch
        return a
        
# @lc code=end

print(Solution().longestCommonPrefix(["abc123", "ab", "abcf"]))

