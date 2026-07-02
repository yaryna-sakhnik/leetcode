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
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        path = [""] * (2 * n)

        def dfs(pos, open_count, close_count):
            if pos == 2 * n:
                res.append("".join(path))
                return

            if open_count < n:
                path[pos] = "("
                dfs(pos + 1, open_count + 1, close_count)

            if close_count < open_count:
                path[pos] = ")"
                dfs(pos + 1, open_count, close_count + 1)

        dfs(0, 0, 0)
        return res
# @leet end

print(Solution().generateParenthesis(2))
