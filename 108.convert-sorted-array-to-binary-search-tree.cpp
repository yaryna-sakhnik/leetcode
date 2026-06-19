/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
 */
#include <cstddef>
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
    using Vec = vector<int>;
    using It = Vec::const_iterator;

    TreeNode* sortedArrayToBST(Vec const &nums) {
        return Impl(nums.begin(), nums.end());
        
    }
private:
    TreeNode* Impl(It b, It e) 
    {
        if (b == e) return nullptr;
        auto m = b + (e - b) / 2;
        return new TreeNode(*m, Impl(b, m), Impl(m + 1, e));
    }
};
// @lc code=end

