#
# @lc app=leetcode id=94 lang=python3
#
# [94] Binary Tree Inorder Traversal
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
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        def travers(n: TreeNode):
            if not n:
                return
            travers(n.left)
            res.append(n.val)
            travers(n.right)
        travers(root)
        return res
        
# @lc code=end

t1 = TreeNode(1, right=TreeNode(2, left=TreeNode(3)))
print(Solution().inorderTraversal(t1))