class Solution {
public:
    int sum(int n){
        int s = 1;
        while (n){
            s *= (n%10);
            n /= 10;
        }

        return s;
    }
    int smallestNumber(int n, int t) {
        while (true){
            if (sum(n)%t == 0) return n;
            n++;
        }
    }
};