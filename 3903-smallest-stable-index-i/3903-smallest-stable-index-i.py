class Solution(object):
    def firstStableIndex(self, nums, k):
        n = len(nums)
        suffix_min = [0] * n
        suffix_min[n-1] = nums[n-1]
        for i in range(n-2, -1, -1):
            suffix_min[i] = min(nums[i], suffix_min[i+1])
        
        maxx = float("-inf")
        for i in range(n):
            maxx = max(maxx, nums[i])
            if maxx - suffix_min[i] <= k:
                return i
        return -1
        