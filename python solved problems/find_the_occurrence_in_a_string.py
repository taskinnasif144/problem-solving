class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        i = 0

        while len(haystack):
            if haystack.startswith(needle):
                return i
            else:
                haystack = haystack[1:]
                i+=1
        
        return -1
    
res = Solution().strStr( haystack = "leetcode", needle = "code")

print(res)