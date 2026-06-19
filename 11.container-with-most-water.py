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
    def maxArea(self, height: List[int]) -> int:
        m = 0
        l = 0;
        r = len(height) - 1
        while l != r:
            s = min(height[r], height[l]) * (r - l)
            m = max(m, s)
            if height[r] > height[l]:
                l += 1
            else:
                r -= 1
        return m
            
# @leet end

print(Solution().maxArea([1, 1]))
