class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """

        prefix = strs[0]

        for string in strs[1:]:
            while not string.startswith(prefix):
                prefix = prefix[:-1]
                
                if not prefix:
                    return ""
        return prefix
        

print(Solution().longestCommonPrefix(["flower","flow","flight"]))