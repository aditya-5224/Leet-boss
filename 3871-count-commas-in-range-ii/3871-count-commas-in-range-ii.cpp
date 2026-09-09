class Solution {
public:
    long long countCommas(long long n) {
        long long cnt = 0, temp = 1000;
        while (temp <= n) {
            cnt += n-temp+1;
            temp *= 1000;
        }

        return cnt;
        
    }
};