from collections import defaultdict
class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        n = len(nums)
        dct = defaultdict(int)
        for i in nums:
            dct[i] += 1

        if k == n:
            return max(nums)

        if k == 1:
            maxx = -1

            for i in range(n):
                if dct[nums[i]] == 1 and nums[i] > maxx:
                    maxx = nums[i]

            return maxx

        if nums[0] == nums[n-1]:
            return -1

        if dct[nums[0]] == 1 and dct[nums[n-1]] == 1:
            return max(nums[0], nums[n-1])

        if dct[nums[0]] == 1 and dct[nums[n-1]] > 1:
            return nums[0]

        if dct[nums[n-1]] == 1 and dct[nums[0]] > 1:
            return nums[n-1]

        return -1