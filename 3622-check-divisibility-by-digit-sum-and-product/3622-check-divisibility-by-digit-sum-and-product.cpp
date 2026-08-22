class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, prdct = 1;
        int temp = n;
        
        while (temp) {
            int r = temp%10;
            sum += r;
            prdct *= r;
            temp /= 10;
        }

        return (n%(prdct+sum) ? false : true);
    }
};