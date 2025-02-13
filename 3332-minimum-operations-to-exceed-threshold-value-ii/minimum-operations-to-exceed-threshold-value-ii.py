import heapq

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        parrot = []
        for num in nums:
            heapq.heappush(parrot, num)
        
        cnt = 0
        while parrot[0] < k:
            first = heapq.heappop(parrot)
            second = heapq.heappop(parrot)
            cnt += 1
            val = min(first, second) * 2 + max(first, second)
            heapq.heappush(parrot, val)
        
        return cnt