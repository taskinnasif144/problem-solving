class Solution:
    def convertToTitle(self, columnNumber):
        sol = ""

        while columnNumber > 0:
            offset = (columnNumber-1) % 26
            new= chr(offset + 65)
            sol += new
            columnNumber = (columnNumber-1) // 26
        return sol[::-1]
    
print(Solution().convertToTitle(701))
        