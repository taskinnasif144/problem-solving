#  https://leetcode.com/problems/binary-search/description/

class Solution:
    def search(self, nums, target):
        l, r = 0, len(nums) -1

        while l <= r:
            mid = (l+r) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                r = mid -1
            else:
                l = mid + 1
        return -1
    
print(Solution().search(nums = [5], target = 5))
        