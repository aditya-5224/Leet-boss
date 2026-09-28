class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr(101,0);
        int max_freq=0;
        for(int x:nums) {
            arr[x]++;
            max_freq = max(max_freq,arr[x]);
        }

        vector<int> ans;
        // ans.reserve(nums.size());
        for(int i = 0; i < max_freq; i++){
            for(int val = 1; val <= 100; val++){
                if(arr[val]>0){
                    ans.push_back(val);
                    arr[val]--;
                }
            }
        }

        return ans;
    }
};