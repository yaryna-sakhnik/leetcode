#
# @lc app=leetcode id=119 lang=python3
#
# [119] Pascal's Triangle II
#

# @lc code=start
from typing import List


class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        if not rowIndex:
            return [1]
        prev = [1]
        for i in range(0, rowIndex):
            row = [1]
            for j in range(i):
                row.append(prev[j] + prev[j + 1])
            row.append(1)
            prev = row
        return prev
# @lc code=end

