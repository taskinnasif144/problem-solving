class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        def findIndex(nums, target, isFirst):
            left = 0
            right = len(nums) -1 
            index = -1

            while left <= right:
                mid = (left + right) //2
                if nums[mid] == target:
                    index = mid
                    if isFirst:
                        right = mid-1
                    else:
                        left = mid+1
                if nums[mid] < target:
                    left = mid+1
                if nums[mid] > target:
                    right = mid -1
            return index
        index1 = findIndex(nums, target, True)
        index2 = findIndex(nums, target, False)

        return [index1, index2]
    
print(Solution().searchRange([5,7,7,8,8,10], 8))