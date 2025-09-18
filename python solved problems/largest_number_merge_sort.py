
class Solution(object):
    def largestNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """
        self._merge_sort(nums)
        nums = "".join(map(str, nums))
        return "0" if nums[0] == '0' else nums
    
    def _merge_sort(self, nums):
        if len(nums) > 1: 
            left_arr = nums[:len(nums)//2]
            right_arr = nums[len(nums)//2:]
            self._merge_sort(left_arr)
            self._merge_sort(right_arr)
            self._merge(nums, left_arr, right_arr)
        
    
    def _merge(self, arr, left, right):
        i = 0
        j = 0
        k = 0

        while i < len(left) and j < len(right):
            if self._compare(left[i], right[j]):
                arr[k] = left[i]
                i += 1
            else:
                arr[k] = right[j]
                j+=1
            k+=1

        while i < len(left):
            arr[k] = left[i]
            i+=1
            k+=1

        while j < len(right):
            arr[k] = right[j]
            j+=1
            k+=1
        
    
    def _compare(self, num1, num2):
        str_1 = str(num1)
        str_2 = str(num2)
        return str_1 + str_2 > str_2 + str_1
    
print(Solution().largestNumber( [0,0,0,0]))