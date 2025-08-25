class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = s.split()
        return len(s[-1])
    
res = Solution().lengthOfLastWord("   fly me   to   the moon  ")

print(res)