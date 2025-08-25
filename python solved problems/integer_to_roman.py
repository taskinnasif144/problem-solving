class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        romanDict = {
            1000: 'M', 
            900: "CM", 
            500: 'D', 
            400: "CD", 
            100: 'C', 
            90:'XC', 
            50: 'L', 
            40:'XL',  
            10: 'X', 
            9: 'IX', 
            5: 'V', 
            4:"IV", 
            1: 'I'
        }
        result = ""
        for key in romanDict:
            count = num //key
            if count > 0:
                result += romanDict[key] * count
                num -= key * count
        return result


return_value = Solution().intToRoman(3749)

print(return_value)