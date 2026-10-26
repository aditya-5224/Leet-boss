class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<int> arr;
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++){
            ans += nums[i];
            string s = to_string(nums[i]);
            sort(s.begin(), s.end(), greater<char>());
            long long temp = (long long)(stoi(s));

            if (temp > nums[i]){
                arr.push_back(temp-nums[i]);
                // st.insert(i);
            }   
        }
        sort(arr.begin(), arr.end(), greater<int>());
    
        for (auto& i : arr){
            if (k <= 0) break;
            k--;
            ans += i;
        }

        return ans;
        
    }
};