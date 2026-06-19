/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

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
    ListNode* deleteDuplicates(ListNode* head) {
        if (not head) {
            return head;
        }
        ListNode* prev = head;
        ListNode* cur = prev->next;
        while (cur != nullptr) {
            if (cur -> val == prev->val) {
                prev->next = cur->next;
                //delete cur;
            } else {
                prev = prev->next;
            }
            cur = prev->next;
        }
        return head;
    }
};
// @lc code=end

int main()
{
    Solution{}.deleteDuplicates(nullptr);
    return 0;
}