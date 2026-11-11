class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int odd_indx = 1, even_indx = 0;
        while (even_indx < nums.size() && odd_indx < nums.size()){
            if (nums[even_indx]%2 == 0) even_indx += 2;
            else if (nums[odd_indx]%2) odd_indx += 2;
            else swap(nums[even_indx], nums[odd_indx]);
        }

        return nums;
        
        
    }
};