class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        new_arr = []
        nums1 = set(nums1)
        nums2 = set(nums2)
        for i in nums1:
            if i in nums2:
                new_arr.append(i)

        return new_arr
           

print(Solution().intersection(nums1 = [4,9,5], nums2 = [9,4,9,8,4]))