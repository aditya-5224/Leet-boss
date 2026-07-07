class Solution {
public:
    long long rev(int n){
        int r = 0;
        while (n){
            r = r*10 + n%10;
            n /= 10;
        }

        return r;
    }
    long long sumAndMultiply(int n) {
        int sum = 0;
        int mul = 0;
        while (n){
            int r = n%10;
            mul += r;
            if (r != 0) sum = sum*10 + r;
            n /= 10;
        }

        return rev(sum)*mul;

    }
};