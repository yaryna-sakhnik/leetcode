/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode helper;
        helper.next = head;
        for (ListNode *n = &helper; n->next != nullptr; ) {
            if (n->next->val == val) {
                n->next = n->next->next;
            } else {
                n = n->next;
            }
        }
        return helper.next;
    }
};
// @lc code=endpt

int main()
{
    using N = ListNode;
    N *m = new N(1, new N(2, new N(6, new N(3, new N(4, new N(5, new N(6)))))));
    N* o = Solution().removeElements(m, 6);
    for (N *n = o; n; ) {
        cout << " " << n->val;

        auto *d = n;
        n = n->next;
        delete d;
    }
    cout << endl;
    return 0;
}