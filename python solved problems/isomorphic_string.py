class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
        myHash ={}

        i = 0

        while i < len(s):
            if s[i] in myHash:
                if myHash[s[i]] != t[i]:
                    return False
            elif t[i] in myHash.values():
                return False
            else: 
                myHash[s[i]] = t[i]
            
            i+=1
        
        return True
    
print(Solution().isIsomorphic( s = "badc", t = "baba"))