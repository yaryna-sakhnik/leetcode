#
# @lc app=leetcode id=290 lang=python3
#
# [290] Word Pattern
#

# @lc code=start
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()
        if len(words) != len(pattern):
            return False
        letter2word = {}
        used_words = set()
        for i, ch in enumerate(pattern):
            if ch not in letter2word:
                if words[i] in used_words:
                    return False
                used_words.add(words[i])
                letter2word[ch] = words[i]
            elif letter2word[ch] != words[i]:
                return False
        return True

# @lc code=end

