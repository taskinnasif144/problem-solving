class Solution(object):
    def getHint(self, secret, guess):
        """
        :type secret: str
        :type guess: str
        :rtype: str
        """
        hashMap ={} 

        for i in secret:
            if i not in hashMap:
                hashMap[i] = 1

            else:
                hashMap[i] += 1

        bulls = 0
        cows = 0

        for i in range(len(secret)):
            if secret[i] == guess[i]:
                bulls += 1
            if guess[i] in hashMap:
                if  hashMap[guess[i]] > 0:
                    cows += 1
                hashMap[guess[i]] -= 1
                
        
        cows = cows - bulls

        return f'{bulls}A{cows}B'


        
print(Solution().getHint(secret = "1123", guess = "0111"))