/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
 */

#include <algorithm>
#include <limits>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int minDepth(TreeNode* root)
    {
        int res = Impl(root, 1);
        return res == INF ? 0 : res;
    }

private:
    static const int INF = std::numeric_limits<int>::max();
    
    int Impl(TreeNode *n, int depth)
    {
        if (!n) return INF;
        if (!n->left && !n->right) return depth;
        int dl = Impl(n->left, depth+1);
        int dr = Impl(n->right, depth+1);
        return std::min(dr, dl);
    }
};
// @lc code=end

