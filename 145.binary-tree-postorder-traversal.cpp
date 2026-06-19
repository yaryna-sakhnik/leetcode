// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

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

// @leet start

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
    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int> v;
        Traverse(root, v);
        return v;
    }

private:
    void Traverse(TreeNode *n, vector<int> &v)
    {
        if (!n)
            return;
        Traverse(n->left, v);
        Traverse(n->right, v);
        v.push_back(n->val);
    }
};
// @leet end
