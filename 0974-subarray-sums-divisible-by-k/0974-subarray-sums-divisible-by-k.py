class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        
        prefix_counts = {0: 1}
        current_sum = 0
        result = 0

        for num in nums:
            current_sum += num
            mod = current_sum % k
            if mod < 0:
                mod += k

            if mod in prefix_counts:
                result += prefix_counts[mod]

            if mod in prefix_counts:
                prefix_counts[mod] += 1
            else:
                prefix_counts[mod] = 1

        return result