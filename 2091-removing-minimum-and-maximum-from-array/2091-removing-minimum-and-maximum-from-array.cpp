class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        int minn = INT_MAX;
        int maxx = INT_MIN;
        for (int i : nums){
            maxx = max(maxx, i);
            minn = min(minn, i);
        }
        
        int l = 0, r = 0, both1 = 0, both2 = 0;
        int ans1, ans2;
        for (int i = 0; i < n; i++){
            l++;
            r++;
            if (nums[i] == maxx || nums[i] == minn) {
                ans1 = l;
                both1 += (!both1 ? l : 0);
            } 
            if (nums[n-i-1] == maxx || nums[n-i-1] == minn) {
                ans2 = r;
                both2 += (!both2 ? r : 0);
            } 
        }

        return min(both1+both2, min(ans1, ans2));
    }
};