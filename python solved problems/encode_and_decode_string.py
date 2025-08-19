# https://leetcode.com/problems/encode-and-decode-strings/description/?envType=problem-list-v2&envId=array

class Solution:

    def encode(self, strs):
        encoded = ""
        for s in strs:
             count = 0
             for c in s:
                 count += 1
             encoded += f'{count}#{s}'
        return encoded

    def decode(self, s):
       res = []
       i = 0
       while i < len(s):
           j = i
           while s[j] != "#":
               j += 1
           length = int(s[i:j])
           word = s[(j+1):(j+1+length)]
           res.append(word)
           i = j +1+length
       return res

    
encode = Solution().encode(["co#de","love","you"])
decode = Solution().decode(encode)

print(encode)
print(decode)