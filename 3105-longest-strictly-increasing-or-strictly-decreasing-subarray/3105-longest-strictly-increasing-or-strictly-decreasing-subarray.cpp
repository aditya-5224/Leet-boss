class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxx = -1;
        for (int i = 0; i < n-1; i++){
            int curr = 1;
            for (int j = i+1; j < n; j++){
                if (nums[j] > nums[j-1]){
                    curr++;
                    // cout << max1 << endl;
                } 
                else break;
            }
            maxx = max(maxx, curr);
        }

        for (int i = 0; i < n-1; i++){
            int curr = 1;
            for (int j = i+1; j < n; j++){
                if (nums[j] < nums[j-1]){
                    curr++;
                    // cout << max1 << endl;
                } 
                else break;
            }
            maxx = max(maxx, curr);
        }

        return maxx == -1 ? 1 : maxx;
    }
};