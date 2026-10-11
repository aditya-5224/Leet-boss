class Solution(object):
    def sumOfSquares(self, nums):
        n = len(nums)
        summ = 0
        for i in range(n):
            if n%(i+1) == 0:
                summ += nums[i]*nums[i]

        return summ
        """
        :type nums: List[int]
        :rtype: int
        """
        