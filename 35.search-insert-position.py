#
# @lc app=leetcode id=35 lang=python3
#
# [35] Search Insert Position
#

from typing import List

# @lc code=start


class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l = 0
        r = len(nums)
        while l != r:
            m = (l + r) // 2
            if nums[m] == target:
                return m
            if nums[m] > target:
                r = m
            else:
                l = m + 1
        return l

# @lc code=end

while True:
    print("nums: ", end='')
    nums = list(map(int, input().split()))
    print("target: ", end='')
    target = int(input())
    print(Solution().searchInsert(nums, target))
