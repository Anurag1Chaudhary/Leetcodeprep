class Solution(object):
    def findDuplicate(self, nums):
        freq={}
        for num in nums:
            if num in freq:
                return num
            freq[num]=1
        
        return -1