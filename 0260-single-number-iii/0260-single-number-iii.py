class Solution(object):
    def singleNumber(self, nums):
        
         mp = {}
         ans = []
        
         for num in nums:
             if num in mp:
                 mp[num] += 1
             else:
                mp[num] = 1
                
         for key, value in mp.items():
             if value == 1:
                 ans.append(key)
                
         return ans
        