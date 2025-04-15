class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums1+=nums2
        nums1.sort()
        lnth=len(nums1)
        if lnth%2==0:
            return float(nums1[lnth//2]+nums1[lnth//2-1])/2
           
        else:
            return nums1[lnth//2]
