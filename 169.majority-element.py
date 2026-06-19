#
# @lc app=leetcode id=169 lang=python3
#
# [169] Majority Element
#

from collections import defaultdict
from typing import List
import statistics

# @lc code=start


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        return int(statistics.median(nums))

# @lc code=end

