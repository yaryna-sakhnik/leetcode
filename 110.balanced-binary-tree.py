#
# @lc app=leetcode id=110 lang=python3
#
# [110] Balanced Binary Tree
#

from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        try:
            self.height(root)
        except Exception:
            return False
        return True
    
    def height(self, n) -> int:
        if not n:
            return 0
        hl = self.height(n.left)
        hr = self.height(n.right)
        if abs(hl - hr) > 1:
            raise Exception()
        return 1 + max(hl, hr)

# @lc code=end

