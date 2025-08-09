class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        sol = ""
        carry = 0

        a, b = a[::-1], b[::-1]

        for i in range(max(len(a), len(b))):
            digit_a = int(a[i]) if i < len(a) else 0
            digit_b = int(b[i]) if i < len(b) else 0

            total = digit_a + digit_b + carry
            res = total % 2
            carry = total // 2
            sol = str(res) + sol
        if carry:
            sol = "1" + sol

        
        return sol
    
print(Solution().addBinary(a = "11", b = "1"))