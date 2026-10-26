class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxx = 0, sum = 0, minn = INT_MAX;
        for (auto& i : nums){
            sum += i;
            maxx = max(maxx, sum);
            minn = min(minn, sum);
            // if (sum < 0) sum = 0 ;
            // else if(sum < 0) sum = 0;
        }

        int ans = abs(maxx);
        ans = max(ans, abs(minn));
        ans = max(ans, abs(maxx-minn));

        return ans;
        
    }
};