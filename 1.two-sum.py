#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#

# @lc code=start
from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i, a in enumerate(nums):
            b = target - a
            j = seen.get(b)
            if j is not None:
                return [i, j]
            seen[a] = i
# @lc code=end

print(Solution().twoSum([2, 9, 7, 11], 9))