class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                long long k = gcd(nums[i], nums[j]);
                long long temp = (1LL*nums[i]*nums[j])/(1LL*k*k);

                ans = max(ans, temp);
           }

        }

        return ans;
        
    }
};