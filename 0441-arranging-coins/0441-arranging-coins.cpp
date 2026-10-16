class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 0;
        long long r = n;
        int ans;

        while(l <= r){
            long long mid = l + (r - l)/2;
            long long c = mid*(mid+1)/2;

            cout << mid << endl;
            
            if(c <= n){
                ans = (int)mid;
            }

            if(c > n) r = mid-1;
            else l = mid+1;
        }
        return ans;
        
    }
};