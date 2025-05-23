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