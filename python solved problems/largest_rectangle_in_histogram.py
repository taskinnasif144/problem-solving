# https://leetcode.com/problems/largest-rectangle-in-histogram/description/?envType=problem-list-v2&envId=stack

class Solution:
    def largestRectangleArea(self, heights):
        maxArea = 0
        stack = []

        for i, h in enumerate(heights):
            idx = i
            while stack and stack[-1][1] > h:
                idx, hgt = stack.pop()
                maxArea = max(maxArea, hgt* (i - idx))
            stack.append((idx, h))
            
        for i, hgt in stack:
            maxArea = max(maxArea, hgt * (len(heights)-i))
        return maxArea

print(Solution().largestRectangleArea([2,1,5,6,2,3]))
        