class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int l, int r) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int st = l;
        for (int i = 0; i < nums.size(); i++){
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            if (nums[i] < l) {
                continue;
            }

            if (nums[i] > r) {
                break;
            }

            if (nums[i] > st){
                ans.push_back({st, nums[i]-1});
            }

            st = nums[i]+1;
        }

        if (st <= r) {
            ans.push_back({st, r});
        }
        return ans;
        
    }
};