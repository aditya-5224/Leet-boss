# Given a string s, find the length of the longest substring without duplicate characters.

# Example 1:

# Input: s = "abcabcbb"
# Output: 3
# Explanation: The answer is "abc", with the length of 3.
# Example 2:

# Input: s = "bbbbb"
# Output: 1
# Explanation: The answer is "b", with the length of 1.
# Example 3:

# Input: s = "pwwkew"
# Output: 3
# Explanation: The answer is "wke", with the length of 3.
# Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

from collections import defaultdict
from typing import Counter


class Solution(object):
    def lengthOfLongestSubstring(self, s):
        char_map = {}
        max_length = 0
        left = 0
        
        for right in range(len(s)):
            if s[right] in char_map and char_map[s[right]] >= left:
                left = char_map[s[right]] + 1
            char_map[s[right]] = right
            current_length = right - left + 1
            if current_length > max_length:
                max_length = current_length
        
        return max_length
        """
        :type s: str
        :rtype: int
        """
        # ,,,,

# Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

class Solution(object):
    def minSubArrayLen(self, target, nums):
        left=0
        summ=0
        min_len=float("inf")
        for right in range(len(nums)):
            summ+=nums[right]
            while summ>=target:
                min_len=min(min_len,right-left+1)
                summ-=nums[left]
                left+=1
        return min_len if min_len!=float("inf") else 0


# Given a string s, return true if s is a good string, or false otherwise.
# A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

class Solution(object):
    def areOccurrencesEqual(self, s):
        dct={}
        for i in s:
            if i not in dct:
                dct[i]=1
            else:
                dct[i]+=1
        return True if max(dct.values())==min(dct.values()) else False
    

# Given a roman numeral, convert it to an integer.

class Solution(object):
    def romanToInt(self, s):
        dct={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        summ=0
        for i in range(len(s)):
            if i<len(s)-1 and dct[s[i]]<dct[s[i+1]]:
                summ-=dct[s[i]]
            else:
                summ+=dct[s[i]]
        return summ
    

# Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that |nums[i] - nums[j]| == k.

class Solution(object):
    def countKDifference(self, nums, k):
        cnt=0
        dct=defaultdict(int)
        for num in nums:
            cnt += dct[num - k] + dct[num + k]
            dct[num] += 1
        return cnt


# A distinct string is a string that is present only once in an array.
# Given an array of strings arr, and an integer k, return the kth distinct string present in arr. If there are fewer than k distinct strings, return an empty string "".
# Note that the strings are considered in the order in which they appear in the array.

class Solution(object):
    def kthDistinct(self, arr, k):
        dct=Counter(arr)
        cnt=0
        for i in arr:
            if dct[i]==1:
                cnt+= 1
                if cnt==k:
                    return i
        return ""
    

# Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.

class Solution(object):
    def numSubarrayProductLessThanK(self, nums, k):
        if k<=1:
            return 0
        left=arr=0
        product=1
        for right in range(len(nums)):
            product*=nums[right]
            while product>=k:
                product//=nums[left]
                left+=1
            arr+=right-left+1
        return arr
    
# Given an array nums of size n, return the majority element.
# The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

class Solution(object):
    def majorityElement(self, nums):
        cnt=ans=0
        for i in nums:
            if cnt==0:
                ans=i
            cnt+=1 if ans==i else -1
        return ans
    
# Given an integer array nums, find the subarray with the largest sum, and return its sum.

class Solution(object):
    def maxSubArray(self, nums):
        max_sum=float("-inf")
        summ=0
        for i in range(len(nums)):
            summ+=nums[i]
            max_sum=max(max_sum,summ)
            if summ<0:
                summ=0
        return max_sum
    

# Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

class Solution(object):
    def myPow(self, x, n):
        # return x**n
        ans=1
        if n<0:
            x=1/x
            n=-n
        while n>0:
            if n%2==1:
                ans*=x
            x*=x
            n//=2
        return ans
    

# You are given an array prices where prices[i] is the price of a given stock on the ith day.
# You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
# Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

class Solution(object):
    def maxProfit(self, prices):
        max_profit=0
        prchase=prices[0]
        for i in range(1,len(prices)):
            prchase=min(prchase,prices[i])
            if prices[i]>prchase:
                max_profit=max(max_profit,prices[i]-prchase)
        return max_profit
    
# Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].
# Return the maximum difference. If no such i and j exists, return -1.Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].
# Return the maximum difference. If no such i and j exists, return -1.
 

class Solution(object):
    def maximumDifference(self, nums):
        min_num=nums[0]
        max_diff=0
        for i in range(1,len(nums)):
            min_num=min(min_num,nums[i])
            if nums[i]>min_num:
                max_diff=max(max_diff,nums[i]-min_num)
 
        return max_diff if max_diff>0 else -1
    

# You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
# Find two lines that together with the x-axis form a container, such that the container contains the most water.
# Return the maximum amount of water a container can store.
# Notice that you may not slant the container.

class Solution(object):
    def maxArea(self, height):
        left=maxwater=0
        right=len(height)-1
        while left<right:
            wdth=right-left
            heit=min(height[left],height[right])
            maxwater=max(maxwater,wdth*heit)
            if height[left]<height[right]:
                left+=1
            else:
                right-=1

        return maxwater
    

# You are given positive integers n and m.
# Define two integers as follows:

# 1. num1: The sum of all integers in the range [1, n] (both inclusive) that are not divisible by m.
# 2. num2: The sum of all integers in the range [1, n] (both inclusive) that are divisible by m.

# Return the integer num1 - num2.

class Solution(object):
    def differenceOfSums(self, n, m):
        summ=0
        for i in range(1,n+1):
            if i%m==0:
                summ-=i
            else:
                summ+=i
        return summ
    

# There is an integer array nums sorted in ascending order (with distinct values).
# Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
# Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
# You must write an algorithm with O(log n) runtime complexity.


class Solution(object):
    def search(self, nums, target):
        start = 0
        end = len(nums) - 1
        while start <= end:
            mid = start + (end - start)//2
            if nums[mid] == target:
                return mid
            if nums[start] <= nums[mid]:# to serach i the left sorted side
                if target in nums[start:mid + 1]:
                    end = mid - 1
                else:
                    start = mid + 1
            else:# to serach in the right sorted side
                if target in nums[mid:end + 1]:
                    start = mid + 1
                else:
                    end = mid - 1
        return -1


# Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
# You must write an algorithm with O(log n) runtime complexity.

class Solution(object):
    def searchInsert(self, nums, target):
        left = 0
        right = len(nums) - 1
        while left <= right:
            mid = left + ( right - left )//2
            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                right = mid - 1
            else:
                left = mid + 1
        return left