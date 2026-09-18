from collections import defaultdict
class Solution(object):
    def subarraySum(self, nums, k):
        n = len(nums)
        prefix_sum = [nums[0]]
        for i in range(1,n):
            prefix_sum.append(nums[i]+prefix_sum[i-1])

        dct =defaultdict(int)
        cnt = 0
        for i in range(n):
            if prefix_sum[i] == k:
                cnt += 1
            val = prefix_sum[i] - k

            if val in dct:
                cnt += dct[val]
    
            dct[prefix_sum[i]] += 1
        return cnt
    
    
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        