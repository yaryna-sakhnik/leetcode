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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode dummy(0, head);

        ListNode *t = &dummy;
        for (int i = 0; i <= n; ++i) {
            t = t->next;
        }

        ListNode *h = &dummy;
        while (t) {
            t = t->next;
            h = h->next;
        }

        auto *to_delete = h->next;
        h->next = h->next->next;
        delete to_delete;

        return dummy.next;
    }
};
// @leet end


int main()
{
    {
        ListNode *l = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
        auto *h = Solution{}.removeNthFromEnd(l, 2);
        while (h) {
            cout << ' ' << h->val;
            h = h->next;
        }
        cout << endl;
    }

    {
        ListNode *l = new ListNode(1, new ListNode(2));
        auto *h = Solution{}.removeNthFromEnd(l, 1);
        while (h) {
            cout << ' ' << h->val;
            h = h->next;
        }
        cout << endl;
    }

    {
        ListNode *l = new ListNode(1);
        auto *h = Solution{}.removeNthFromEnd(l, 1);
        while (h) {
            cout << ' ' << h->val;
            h = h->next;
        }
        cout << endl;
    }

    return 0;
}
