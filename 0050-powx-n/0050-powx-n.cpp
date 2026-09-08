class Solution {
public:
    double myPow(double x, long long n) {
        // n = (long long)n;
        if (n < 0){
            x = 1/x;
            n = -n;
        }
        double ans = 1.0;
        while (n) {
            if (n&1) ans *= x;

            x *= x;
            n /= 2;
        }

        return ans;
    }
};