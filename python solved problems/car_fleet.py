#  https://leetcode.com/problems/car-fleet/description/?envType=problem-list-v2&envId=stack

class Solution:
    def carFleet(self, target, position, speed):
        cars = {}
        res = []

        for i in range(len(speed)):
            cars[position[i]] = speed[i]
        cars = dict(sorted(cars.items(), key=lambda x: x[0], reverse=True))

        for c in cars:
            time = (target - c)/ cars[c]
            if res and res[-1] > time:
                res.append(res[-1])
            else:
                res.append(time)
        
        return len(set(res))
    
print(Solution().carFleet(target = 12, position =[10,8,0,5,3], speed = [2,4,1,1,3]))
        