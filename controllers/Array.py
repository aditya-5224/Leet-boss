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



# Given a 0-indexed integer array nums of length n and an integer k, return the number of pairs (i, j) where 0 <= i < j < n, such that nums[i] == nums[j] and (i * j) is divisible by k.


class Solution(object):
    def countPairs(self, nums, k):
        cnt=0
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i] == nums[j] and (i * j)%k==0:
                    cnt+=1
        return cnt


# Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

class Solution(object):
    def myPow(self, x, n):
        return x**n


# Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

# In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.
# # Note that 0 is neither positive nor negative.

class Solution(object):
    def maximumCount(self, nums):
        cnt1=0
        cnt2=0
        for i in nums:
            if i<0:
                cnt1+=1
            elif i>0:
                cnt2+=1
        if cnt1>cnt2:
            return cnt1
        else:
            return cnt2
        

# Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

class Solution(object):
    def countNegatives(self, grid):
        cnt=0
        for i in grid:
            for j in range(len(i)):
                if i[j]<0:
                    cnt+=1
        return cnt
    
# Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].
# Return the maximum difference. If no such i and j exists, return -1.


class Solution(object):
    def maximumDifference(self, nums):
        l=[]
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if nums[j] - nums[i]>0:
                    l+=[nums[j] - nums[i]]
                else:
                    l+=[nums[j] - nums[i]]
        if max(l)>0:
            return (max(l))
        else:
            return (-1)


# Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

class Solution(object):
    def searchInsert(self, nums, target):
        if target in nums:
            return nums.index(target)
        else:
            nums+=[target]
            nums.sort()
            return nums.index(target)


# Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
# You must implement a solution with a linear runtime complexity and use only constant extra space.

class Solution(object):
    def singleNumber(self, nums):
        for i in nums:
            if nums.count(i)==1:
                return i