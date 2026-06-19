#
# @lc app=leetcode id=206 lang=python3
#
# [206] Reverse Linked List
#

from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next


class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        r = None
        while head:
            next = head.next
            head.next = r
            r = head
            head = next
        return r
# @lc code=end

