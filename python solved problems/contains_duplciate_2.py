class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        hash =set()
        L = 0

        for R in range(len(nums)):
            if abs(R-L) > k:
                hash.remove(nums[L])
                L+=1
            if nums[R] in hash:
                return True
            hash.add(nums[R])
        
        return False
    
print(Solution().containsNearbyDuplicate( nums = [1,2,3,1], k = 1))