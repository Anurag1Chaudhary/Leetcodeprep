class Solution:
    def maxSatisfied(self, customers: List[int], grumpy: List[int], minutes: int) -> int:
        n = len(customers)
        max_unhappy = 0
        current_unhappy = 0

        # Calculate the initial window 
        for i in range(minutes):
            current_unhappy += customers[i] * grumpy[i]

        max_unhappy = current_unhappy
        i = 0
        j = minutes

        # Slide the window over the array
        while j < n:
            current_unhappy += customers[j] * grumpy[j]
            current_unhappy -= customers[i] * grumpy[i]
            max_unhappy = max(max_unhappy, current_unhappy)
            i += 1
            j += 1

        total_satisfied = max_unhappy

        # Calculate the total satisfaction
        for i in range(n):
            total_satisfied += customers[i] * (1 - grumpy[i])

        return total_satisfied
        