class Solution {
public:
    int check(int n){
        int max1 = 0, max2 = 0;
        while (n){
            int r = n%10;
            if (r >= max1){
                max2 = max1;
                max1 = r;
            }

            else{
                max2 = max(max2, r);
            }

            n /= 10;
        }

        return max1*max2;
    }
    int maxProduct(int n) {
        return check(n);
    }
};