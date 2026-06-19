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
    def letterCombinations(self, digits: str) -> List[str]:
        strs = []
        m = {'2' : 'abc', '3' : 'def', '4': 'ghi', '5' : 'jkl', '6' : 'mno', '7' : 'pqrs', '8' : 'tuv', '9' : 'wxyz'}

        def letter(i, pref):
            print(f'{' ' * i}i={i} pref={pref}')
            if i == len(digits):
                print(f"out -> {pref}")
                strs.append(pref)
            else:
                for l in m[digits[i]]:
                    letter(i + 1, pref + l)
        letter(0, '')
        return strs

# @leet end

Solution().letterCombinations('23')
