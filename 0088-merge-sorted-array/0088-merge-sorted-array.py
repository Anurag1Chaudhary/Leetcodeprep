class Solution(object):
    def merge(self, nums1, m, nums2, n):
        left = m - 1
        right = n - 1
        merged = m + n - 1
        
        while left >= 0 and right >= 0:
            if nums1[left] > nums2[right]:
                nums1[merged] = nums1[left]
                merged -= 1
                left -= 1
            else:
                nums1[merged] = nums2[right]
                merged -= 1
                right -= 1
        
        while left >= 0:
            nums1[merged] = nums1[left]
            merged -= 1
            left -= 1
            
        while right >= 0:
            nums1[merged] = nums2[right]
            merged -= 1
            right -= 1