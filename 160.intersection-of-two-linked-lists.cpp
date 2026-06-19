/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int la = 0;
        for (ListNode *n = headA; n; n = n->next) {
            ++la;
        }
        int lb = 0;
        for (ListNode *n = headB; n; n = n->next) {
            ++lb;
        }
        int d = la - lb;
        for (auto i = 0; i < d; ++i) {
            headA = headA->next;
        }
        for (auto i = 0; i > d; --i) {
            headB = headB->next;
        }
        for (; headA != headB; headA = headA->next, headB = headB->next) {
        }
        return headA;
    }
};
// @lc code=end

