class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        for (int i = 0; i < n; i++){
            if (!(nums[i]%2)) swap(nums[i], nums[l++]);
        }

        return nums;
    }
};