class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() == 0) return 0;

        int cnt = 1, maxx = 1;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == nums[i-1] ) {
                continue;
            }
            if (nums[i]-nums[i-1] == 1){
                cnt++;
                maxx = max(maxx, cnt);
            }
            else cnt = 1;
        }

        return maxx;
    }
};