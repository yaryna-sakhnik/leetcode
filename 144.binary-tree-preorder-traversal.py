#
# @lc app=leetcode id=144 lang=python3
#
# [144] Binary Tree Preorder Traversal
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
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        def impl(n):
            if not n:
                return 
            res.append(n.val)
            impl(n.left)
            (impl(n.right))
        impl(root)
        return res
# @lc code=end

t = TreeNode(1, None, TreeNode(2, TreeNode(3)))
print(Solution().preorderTraversal(t))
