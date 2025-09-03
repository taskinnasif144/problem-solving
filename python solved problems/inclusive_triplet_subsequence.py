class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        i = 2 ** 31
        j = 2 ** 31
        k = 2 ** 31

        for n in nums:
            if n < i:
                i = n
            elif n < j:
                j = n
            else:
                return True
        return False
    
print(Solution().increasingTriplet([1,2,3,4,5]))