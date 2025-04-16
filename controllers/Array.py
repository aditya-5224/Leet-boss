# Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

# The overall run time complexity should be O(log (m+n)).

 

# Example 1:

# Input: nums1 = [1,3], nums2 = [2]
# Output: 2.00000
# Explanation: merged array = [1,2,3] and median is 2.
# Example 2:

# Input: nums1 = [1,2], nums2 = [3,4]
# Output: 2.50000
# Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums1+=nums2
        nums1.sort()
        lnth=len(nums1)
        if lnth%2==0:
            return float(nums1[lnth//2]+nums1[lnth//2-1])/2
           
        else:
            return nums1[lnth//2]
        



# Given an integer x, return true if x is a palindrome, and false otherwise.


class Solution(object):
    def isPalindrome(self, x):
        return True if str(x)==str(x)[::-1] else False
