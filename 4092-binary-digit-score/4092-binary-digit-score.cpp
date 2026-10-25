class Solution {
public:
    int check(int n){
        int cnt = 0;
        while (n){
            if (n%2) cnt++;
            n /= 2;
        }
        return cnt;
    }
    int calculateScore(int a, int b) {
        a = check(a);
        b = check(b);

        if(a >= b) return  a*b;
        else return b/a;
    }
};