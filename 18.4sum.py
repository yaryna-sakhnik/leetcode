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

from typing import List

# @leet start
class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        res = []

        for a in range(n - 3):
            if a > 0 and nums[a] == nums[a - 1]:
                continue

            if nums[a] + nums[a+1] + nums[a+2] + nums[a+3] > target:
                break

            if nums[a] + nums[n-1] + nums[n-2] + nums[n-3] < target:
                continue

            for b in range(a + 1, n - 2):
                if b > a + 1 and nums[b] == nums[b - 1]:
                    continue

                if nums[a] + nums[b] + nums[b+1] + nums[b+2] > target:
                    break

                if nums[a] + nums[b] + nums[n-1] + nums[n-2] < target:
                    continue

                c, d = b + 1, n - 1

                while c < d:
                    s = nums[a] + nums[b] + nums[c] + nums[d]

                    if s == target:
                        res.append([nums[a], nums[b], nums[c], nums[d]])

                        c += 1
                        d -= 1

                        while c < d and nums[c] == nums[c - 1]:
                            c += 1

                        while c < d and nums[d] == nums[d + 1]:
                            d -= 1

                    elif s < target:
                        c += 1
                    else:
                        d -= 1

        return res


# @leet end

print(Solution().fourSum([1,0,-1,0,-2,2], 0))
