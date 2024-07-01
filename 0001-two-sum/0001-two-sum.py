class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n=len(nums)
        map={}
        for i,n in enumerate(nums):
            diff=target-n
            if diff in map:
                return [map[diff],i]
            map[n]=i
        
                
        