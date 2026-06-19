/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
 */

#include <string>
#include <vector>

using namespace std;

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
 */
class Solution
{
public:
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> res;
        string path;
        dfs(root, path, res);
        return res;
    }

private:
    void dfs(TreeNode *n, string &path, vector<string> &res)
    {
        if (!n) {
            return;
        }
        if (!n->left && !n->right) {
            res.push_back(path + to_string(n->val));
            return;
        }

        auto s = path.size();
        path += to_string(n->val) + "->";
        dfs(n->left, path, res);
        dfs(n->right, path, res);
        path.resize(s);
    }
};
// @lc code=end

