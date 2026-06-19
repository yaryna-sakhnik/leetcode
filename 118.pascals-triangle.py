#
# @lc app=leetcode id=118 lang=python3
#
# [118] Pascal's Triangle
#

# @lc code=start
from typing import List


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = []
        for i in range(numRows):
            row = [1]
            for j in range(i - 1):
                row.append(res[i-1][j] + res[i-1][j+1])
            if i > 0:
                row.append(1)
            res.append(row)
        return res
# @lc code=end

print(Solution().generate(5))
