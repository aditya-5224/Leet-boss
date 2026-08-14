class Solution(object):
    def maximumLengthSubstring(self, s):
        ans = l = 0
        dct = defaultdict(int)

        for r, ch in enumerate(s):
            dct[ch] += 1
            while dct[ch] > 2:
                dct[s[l]] -= 1
                l += 1
                
            ans = max(ans, r - l + 1)

        return ans
        