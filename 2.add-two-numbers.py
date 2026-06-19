#
# @lc app=leetcode id=2 lang=python3
#
# [2] Add Two Numbers
#

from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# @lc code=start
# Definition for singly-linked list.

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode()
        tail = head
        carry = 0

        while l1 or l2 or carry:
            if l1:
                carry += l1.val
                l1 = l1.next
            if l2: 
                carry += l2.val
                l2 = l2.next

            tail.next = ListNode(carry % 10)
            tail = tail.next
            carry //= 10

        return head.next
# @lc code=end

a = ListNode(1, ListNode(2, ListNode(3)))
b = ListNode(4, ListNode(5))
c = Solution().addTwoNumbers(a, b)
while c:
    print(c.val, end='')
    c = c.next
print()