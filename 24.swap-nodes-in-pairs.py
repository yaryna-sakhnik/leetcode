# @leet imports start
from string import *
from re import *
from datetime import *
from collections import *
from heapq import *
from bisect import *
from copy import *
from math import *
from random import *
from statistics import *
from itertools import *
from functools import *
from operator import *
from io import *
from sys import *
from json import *
from builtins import *
import string
import re
import datetime
import collections
import heapq
import bisect
import copy
import math
import random
import statistics
import itertools
import functools
import operator
import io
import sys
import json
from typing import *
# @leet imports end

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# @leet start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
       dummy = ListNode(next=head)
       n = dummy
       while True:
           n1 = n.next
           if not n1:
               break
           n2 = n1.next
           if not n2:
               break
           n3 = n2.next
           n1.next = n3
           n2.next = n1
           n.next = n2
           n = n1
       return dummy.next
# @leet end
