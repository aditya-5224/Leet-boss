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
            

# Given an array nums of integers, return how many of them contain an even number of digits.

class Solution(object):
    def findNumbers(self, nums):
        cnt=0
        for i in nums:
            if len(str(i))%2==0:
                cnt+=1
        return cnt


# Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
# Note that you must do this in-place without making a copy of the array.

class Solution(object):
    def moveZeroes(self, nums):
        for i in range(nums.count(0)):
            nums.remove(0)
            nums.append(0)


# You are given a 0-indexed array nums of size n consisting of non-negative integers.
# You need to apply n - 1 operations to this array where, in the ith operation (0-indexed), you will apply the following on the ith element of nums:
# If nums[i] == nums[i + 1], then multiply nums[i] by 2 and set nums[i + 1] to 0. Otherwise, you skip this operation.
# After performing all the operations, shift all the 0's to the end of the array.
# For example, the array [1,0,2,0,0,1] after shifting all its 0's to the end, is [1,2,1,0,0,0].
# Return the resulting array.
# Note that the operations are applied sequentially, not all at once.

class Solution(object):
    def applyOperations(self, nums):
        for i in range(len(nums)-1):
            if nums[i] == nums[i + 1]:
                nums[i]=2*nums[i]
                nums[i+1]=0
        for j in range(nums.count(0)):
            if 0 in nums:
                nums.remove(0)
                nums.append(0)
        return nums


# Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
# Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
# Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
# Return k.Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
# Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
# Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
# Return k.

class Solution(object):
    def removeElement(self, nums, val):
        for i in range(nums.count(val)):
            nums.remove(val)


# Given an array nums of size n, return the majority element.
# The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

class Solution(object):
    def majorityElement(self, nums):
        nums.sort()
        return nums[len(nums)//2]
    

# Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
# If target is not found in the array, return [-1, -1].
# You must write an algorithm with O(log n) runtime complexity.

class Solution(object):
    def searchRange(self, nums, target):
        lst=[]
        if target in nums:
            for i in range(len(nums)):
                if nums[i]==target:
                    lst+=[nums.index(nums[i])]
                    nums[i]+=1
            return [min(lst),max(lst)]
        else:
            return [-1,-1]
        

# Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
# You must implement a solution with a linear runtime complexity and use only constant extra space.

class Solution(object):
    def singleNumber(self, nums):
        for i in nums:
            if nums.count(i)==1:
                return i
            

# Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

class Solution(object):
    def missingNumber(self, nums):
        for i in range(len(nums)+1):
            if i not in nums:
                return i
            
# Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.
# A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

class Solution(object):
    def buildArray(self, nums):
        ans=[]
        for i in range(len(nums)):
            ans+=[nums[nums[i]]]
        return ans
    

# Given two arrays of strings list1 and list2, find the common strings with the least index sum.
# A common string is a string that appeared in both list1 and list2.
# A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j] then i + j should be the minimum value among all the other common strings.
# Return all the common strings with the least index sum. Return the answer in any order.

class Solution(object):
    def findRestaurant(self, list1, list2):
        lst=[]
        dct={}
        for i in list1:
            if i in list2:
                dct[i]=list1.index(i)+list2.index(i)
        for j in dct:
            if dct[j]==min(dct.values()):
                lst+=[j]
        return lst
    

# Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution(object):
    def containsDuplicate(self, nums):
        nums.sort()
        dct={}
        cnt=1
        for i in nums:
            if i not in dct:
                dct[i]=1
            else:
                cnt+=1
        return True if cnt>1 else False


# Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

class Solution(object):
    def sortedSquares(self, nums):
        for i in range(len(nums)):
            nums[i]=nums[i]**2
        return sorted(nums)
    

# There is a programming language with only four operations and one variable X:
# ++X and X++ increments the value of the variable X by 1.
# --X and X-- decrements the value of the variable X by 1.
# Initially, the value of X is 0.
# Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

class Solution(object):
    def finalValueAfterOperations(self, operations):
        cnt=0
        for i in operations:
            if i in ["++X", "X++"]:
                cnt+=1
            else:
                cnt-=1
        return cnt
 

#  Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

import heapq
def topKFrequent(self, nums, k):
    dct={}
    for i in nums:
        if i not in dct:
            dct[i]=1
        else:
            dct[i]+=1
    return heapq.nlargest(k, dct.keys(), key=dct.get)


# You are given an integer array nums. Transform nums by performing the following operations in the exact order specified:

# 1.Replace each even number with 0.
# 2.Replace each odd numbers with 1.
# 3.Sort the modified array in non-decreasing order.

# Return the resulting array after performing these operations.
class Solution(object):
    def transformArray(self, nums):
        n=len(nums)
        for i in range(n):
            if nums[i]%2==0:
                nums[i]=0
            else:
                nums[i]=1
        return sorted(nums)
