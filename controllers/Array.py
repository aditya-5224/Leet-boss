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



# Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#  Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution(object):
    def reverse(self, x):
        
        if x>=0:
            x = int(str(x)[::-1])
            if x >= 2**31 - 1 or x == 0:
                return 0
            else: return x
        else:
            x= int("-"+(str(x)[:-len(str(x)):-1]))
            if -2**31 >= x:
                return 0
            else: return x

