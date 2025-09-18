# https://leetcode.com/problems/longest-repeating-character-replacement/
class Solution:
    def characterReplacement(self, s: str, k: int):
        charMap = {}
        l = 0
        count = 0
        max_count = 0
        for r in range(len(s)):
            if s[r] in charMap:
                charMap[s[r]] +=1
            else:
                charMap[s[r]] = 1
            count+=1
            if (r + 1 -l) - max(charMap.values()) <= k:
                max_count = max(count, max_count)
            else:
                while not (r+1-l) - max(charMap.values()) <= k:
                    charMap[s[l]] -= 1
                    l+=1
                    count-=1
        return max_count
    
print(Solution().characterReplacement(s = "BAAA", k = 0))