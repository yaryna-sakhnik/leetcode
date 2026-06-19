#
# @lc app=leetcode id=257 lang=python3
#
# [257] Binary Tree Paths
#

from typing import List, Optional


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
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        res = []

        def dfs(node: Optional[TreeNode], path: str) -> None:
            if not node:
                return

            if not node.left and not node.right:
                res.append(path + str(node.val))
                return

            path += f"{node.val}->"

            dfs(node.left, path)
            dfs(node.right, path)

        dfs(root, "")
        return res

        
# @lc code=end

