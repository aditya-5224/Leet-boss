class Solution(object):
    def searchRange(self, nums, target):
        st = end = -1
        l, r = 0, len(nums)-1
        while l<=r:
            mid = l+(r-l)//2
            if nums[mid] == target:
                st = mid
                r = mid-1
            elif nums[mid] > target:
                r = mid-1
            else:
                l = mid+1
        
        l, r = 0, len(nums)-1
        while l<=r:
            mid = l+(r-l)//2
            if nums[mid] == target:
                end = mid
                l = mid+1
            elif nums[mid] > target:
                r = mid-1
            else:
                l = mid+1
                
        return [st,end]
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        