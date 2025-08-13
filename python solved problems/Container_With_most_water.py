# https://leetcode.com/problems/container-with-most-water/description/

class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        area = 0
        l = 0
        r = len(height)-1
        while l < r:
            temp = min(height[l], height[r]) * (r-l)
            area = max(area, temp)
            if  height[l] < height[r]:
                l+=1
            else:
                r-=1


        return area

print(Solution().maxArea([1,8,6,2,5,4,8,3,7]))