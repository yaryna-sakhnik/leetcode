/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

bool isBadVersion(int version);

// @lc code=start
// The API isBadVersion is defined for you.
// 

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int r = n;
        while (l < r) {
            int m = l + (r - l) / 2; 
            if (isBadVersion(m)) {
                r = m;
            } else {
                l = m + 1;
            }
        }
        return l;
    }
};
// @lc code=end

