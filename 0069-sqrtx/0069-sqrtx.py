class Solution(object):
    def mySqrt(self, x):
        if x==1:
            return 1
        l = 1
        r = x//2+ 1
        while l<=r:
            mid = l + (r-l)//2
            if mid*mid == x:
                return mid
            elif mid*mid < x:
                l = mid+1
            else:
                r = mid-1
        return r
        