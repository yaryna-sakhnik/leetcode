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

# @leet start
class Solution:
    def reverse(self, x: int) -> int:
        r = int(str(abs(x))[::-1]) * (-1 if x < 0 else 1)
        return r if -(2**31) <= r <= 2**31 - 1 else 0
 
 
# @leet end

print(Solution().reverse(-123))
