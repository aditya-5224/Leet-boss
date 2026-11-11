class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> pos;
        // vector<int> neg;
        // for (auto& i : nums){
        //     if (i < 0) neg.push_back(i);
        //     else pos.push_back(i);
        // }

        // vector<int> ans;
        // for (int i = 0; i < pos.size(); i++){
        //     ans.push_back(pos[i]);
        //     ans.push_back(neg[i]);
        // }

        // return ans;

        // int p = 0, n = 1;
        // while (p < nums.size() && n < nums.size()){
        //     if (nums[p] >= 0) p += 2;
        //     else if (nums[n] < 0) n += 2;
        //     else swap(nums[p], nums[n]);
        // }

        // return nums;

        vector<int> ans(nums.size(), 0);
        int p = 0, n = 1;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] >= 0) {
                ans[p] = nums[i];
                p += 2;
            }
            else{
                ans[n] = nums[i];
                n += 2;
            }
        }

        return ans;

        
    }
};