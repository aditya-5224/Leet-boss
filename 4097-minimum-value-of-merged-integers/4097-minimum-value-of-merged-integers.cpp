class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = stoi(to_string(nums[0])+to_string(nums[1]));
        for (int i = 2; i < nums.size()-1; i += 2) ans = min(ans, stoi(to_string(nums[i])+to_string(nums[i+1])));

        return ans;
        
    }
};