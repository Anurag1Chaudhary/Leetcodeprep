class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minprice=max(prices)
        maxprof=0
        for price in prices:
            minprice=min(minprice,price)
            maxprof=max(maxprof,price-minprice)
        
        return maxprof
        