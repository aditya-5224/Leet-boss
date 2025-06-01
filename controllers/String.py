# A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

# # Given a string s, return true if it is a palindrome, or false otherwise.

class Solution(object):
    def isPalindrome(self, s):
        st=""
        for i in s:
            if i.isalnum():
                st+=i.lower()
        return True if st[::-1]==st else False
    

# Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

class Solution(object):
    def strStr(self, haystack, needle):
        return -1 if needle not in haystack else haystack.index(needle)


# Given a string s consisting of words and spaces, return the length of the last word in the string.
# A word is a maximal substring consisting of non-space characters only.

class Solution(object):
    def lengthOfLastWord(self, s):
        lst=s.split()
        return len(lst[-1])
    

# Given an input string s, reverse the order of the words.
# A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
# Return a string of the words in reverse order concatenated by a single space.
# Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.


class Solution(object):
    def reverseWords(self, s):
        lst=s.split()
        st=" ".join(lst[::-1])
        return (st)
    
# Write a function that reverses a string. The input string is given as an array of characters s.
# You must do this by modifying the input array in-place with O(1) extra memory.

class Solution(object):
    def reverseString(self, s):
        left=0
        right=len(s)-1
        while left<right:
            s[left],s[right]=s[right],s[left]
            left+=1
            right-=1


# We define the usage of capitals in a word to be right when one of the following cases holds:
# All letters in this word are capitals, like "USA".
# All letters in this word are not capitals, like "leetcode".
# Only the first letter in this word is capital, like "Google".
# Given a string word, return true if the usage of capitals in it is right.

class Solution(object):
    def detectCapitalUse(self, word):
        return True if word.isupper() or word.islower() or word.capitalize()==word else False
    
# Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

class Solution(object):
    def toLowerCase(self, s):
        dct=""
        for i in s:
            if i.isupper()==True:
                dct+=chr(ord(i)+32)
            else:
                dct+=i
        return dct
    

# You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.
# Return the score of s.

class Solution(object):
    def scoreOfString(self, s):
        summ=0
        for i in range(len(s)):
            if i!=len(s)-1:
                summ+=abs(ord(s[i])-ord(s[i+1]))
        return summ
    

# Reversing an integer means to reverse all its digits.
# For example, reversing 2021 gives 1202. Reversing 12300 gives 321 as the leading zeros are not retained.
# Given an integer num, reverse num to get reversed1, then reverse reversed1 to get reversed2. Return true if reversed2 equals num. Otherwise return false.

class Solution(object):
    def isSameAfterReversals(self, num):
        nums=int(str(num)[::-1])
        return True if int(str(nums)[::-1])==num else False


# You are given a 0-indexed array of strings words and a character x.
# Return an array of indices representing the words that contain the character x.
# Note that the returned array may be in any order.

class Solution(object):
    def findWordsContaining(self, words, x):
        arr=[]
        n=len(words)
        for i in range(n):
            if x in words[i]:
                arr.append(i)
        return arr