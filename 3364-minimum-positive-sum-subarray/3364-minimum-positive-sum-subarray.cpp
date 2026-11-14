class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minn = INT_MAX;
        for (int i = 0; i < nums.size(); i++){
            int sum = nums[i];
            if ((l == 1 || r == 1) && sum > 0) minn = min(minn, sum);

            for (int j = i+1; j < nums.size(); j++){
        
                int len = j-i+1;
                if (len > r) break;
                sum += nums[j];
                if (len >= l && len <= r && sum > 0){
                    minn = min(minn, sum);
                }
                
            }
        }

        return minn != INT_MAX ? minn : -1;
    }
};