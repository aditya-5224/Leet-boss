class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = 0, check = 0;
        for (int i = 0; i < nums.size(); i++) {
            // int temp = nums[i];
            if (nums[i] != i){
                if (ans == 0 && !check) {
                    ans = nums[i];
                    check = 1;
                    continue;
                } 
                ans &= nums[i];
                // ans = max(ans, temp);
                cout << ans << endl;
            }
        }
        return ans;
    }
};