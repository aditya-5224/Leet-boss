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