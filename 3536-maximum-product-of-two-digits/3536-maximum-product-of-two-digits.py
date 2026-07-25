class Solution(object):
    def maxProduct(self, n):
        s= sorted(str(n))
        # print(s)
        return int(s[-1])*int(s[-2]);
        """
        :type n: int
        :rtype: int
        """
        