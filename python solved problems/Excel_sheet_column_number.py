class Solution(object):
    def titleToNumber(self, columnTitle):
        """
        :type columnTitle: str
        :rtype: int
        """
        sum = 0
        index = 0
        for i in columnTitle[::-1]:
            value = (ord(i)-64 )* pow(26, index)
            sum += value
            index += 1
            

        return sum
    


print(Solution().titleToNumber("AA"))
        