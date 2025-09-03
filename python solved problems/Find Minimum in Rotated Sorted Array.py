# https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution:
    def findMin(self, nums) -> int:
        l = 0 
        r = len(nums) -1
        minn = nums[0]

        while l <= r:
            mid=(l + r) // 2
            if nums[mid] < nums[r]:
                minn = min(minn, nums[mid])
                r = mid -1
            elif nums[l] < nums[mid]:
                minn = min(minn, nums[mid])
                l = mid + 1 
            else:
                minn = min(minn, nums[l])
                l+=1
        return minn

print(Solution().findMin([4,5,6,7]))