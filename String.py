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