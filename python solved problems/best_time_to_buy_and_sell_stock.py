class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        buy = 0
        sell = 1
        profit = 0
        while sell < len(prices):
            current_profit = prices[sell] - prices[buy]
            if current_profit < 0:
                buy = sell
                sell += 1
            elif current_profit < profit:
                sell += 1
            else: 
                profit = current_profit
                sell += 1

        
        return profit
    
print(Solution().maxProfit([7,1, 0, 2, 5,3,6,4]))