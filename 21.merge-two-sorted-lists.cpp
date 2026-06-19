/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct ListNode
{
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
class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode head;
        ListNode *tail = &head;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if (list1) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }
        return head.next;
    }
};
// @lc code=end

static ListNode* ParseList(const string &line)
{
    ListNode head, *tail = &head;

    istringstream iss(line);
    int v;
    while (iss >> v) {
        ListNode *n = new ListNode(v);
        tail->next = n;
        tail = n;
    }
    return head.next;
}

int main()
{
    string line;
    getline(cin, line);
    ListNode *list1 = ParseList(line);

    getline(cin, line);
    ListNode *list2 = ParseList(line);

    ListNode *res = Solution{}.mergeTwoLists(list1, list2);
    for (ListNode *n = res; n; n = n->next) {
        cout << " " << n->val;
    }
    cout << endl;
    return 0;
}