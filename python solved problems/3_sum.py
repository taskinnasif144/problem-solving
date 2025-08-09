# https://leetcode.com/problems/3sum/description/

class Solution:
    def threeSum(self, nums):
        nums = sorted(nums)
        res = []
        for i in range(len(nums)):
            if nums[i] > 0:
                break
            if i > 0 and nums[i] == nums[i-1]:
                continue
            l = i+1
            r = len(nums) -1
            while l < r:
                summation = nums[l] + nums[r]
                if summation < abs(nums[i]):
                    l += 1
                if summation > abs(nums[i]):
                    r -= 1
                if summation == abs(nums[i]):
                    res.append([nums[i],nums[l],nums[r] ])
                    l+=1
                    while nums[l] == nums[l-1] and l < r:
                        l+=1

        return res

print(Solution().threeSum( nums=[-2,0,1,1,2]))