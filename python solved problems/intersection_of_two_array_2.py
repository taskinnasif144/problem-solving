class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        map = {}
        new_arr = []
        for i in nums1:
            if i in map:
                map[i] += 1
            else:
                map[i] = 1
        for num in nums2:
            if num in map and map[num] > 0:
                new_arr.append(num)
                map[num] -= 1

        return new_arr

print(Solution().intersect([1,2,2,1], [2,2]))