# https://leetcode.com/problems/daily-temperatures/description/?envType=problem-list-v2&envId=stack

class Solution(object):
    def dailyTemperatures(self, temperatures):
        stack = []
        res = [0] * len(temperatures) 

        for i, t in enumerate(temperatures):
            if len(stack) == 0:
                stack.append((i, t))
            if stack and stack[-1][1] > t:
                stack.append((i, t))
            while stack and stack[-1][1] < t:
                res[stack[-1][0]] = abs( stack[-1][0] - i)
                stack.pop()
            stack.append((i,t))
        
        return res
    
print(Solution().dailyTemperatures([73,74,75,71,69,72,76,73]))