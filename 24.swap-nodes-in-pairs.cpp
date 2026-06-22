// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// @leet start
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
class Solution
{
public:
    ListNode* swapPairs(ListNode* head)
    {
        ListNode dummy(0, head);
        ListNode *n = &dummy;
        while (true) {
            auto n1 = n->next;
            if (!n1) break;

            auto n2 = n1->next;
            if (!n2) break;
            auto n3 = n2->next;
            n1->next = n3;
            n2->next = n1;
            n->next = n2;
            n = n1;
        }
        return dummy.next;

    }
};
// @leet end
