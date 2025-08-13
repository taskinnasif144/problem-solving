# https://leetcode.com/problems/top-k-frequent-elements/description/?envType=problem-list-v2&envId=hash-table

class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        hashMap = {}
        for n in nums:
            if n in hashMap:
                hashMap[n] += 1
            else:
                hashMap[n] = 1
        hashMap = dict(sorted(hashMap.items(),key=lambda x: x[1], reverse=True )[:k]).keys()
        return list(hashMap)
        
print(Solution().topKFrequent(nums = [1,2,2,3,3,3], k = 2))