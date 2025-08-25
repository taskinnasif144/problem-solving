# https://leetcode.com/problems/group-anagrams/description/?envType=problem-list-v2&envId=hash-table

from collections import defaultdict

class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        res = defaultdict(list)
        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c) - ord('a')] += 1
            res[tuple(count)].append(s)
        
        return res.values()

        


        

        
print(Solution().groupAnagrams(strs = ["","b",""]))