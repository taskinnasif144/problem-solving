class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        def climb(top, memo={}):
            if top == 0: return 1
            if top < 0: return 0
            if top in memo:
                return memo[top]
            memo[top] = climb(top -1) + climb(top-2)
            return memo[top]
        
        return climb(n)

print(Solution().climbStairs(2))
 