class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        vector<int> maxElem(n, 0);
        int MAX = 0;
        for (int i = 0; i < n; i++){
            int num = nums[i];
            int maxx = 0, minn = INT_MAX;
            while (num){
                int digit = num%10;
                maxx = max(maxx, digit);
                minn = min(minn, digit);
                num /= 10;
            }
            maxElem[i] = maxx-minn;
            MAX = max(MAX, maxx-minn);
        }

        int ans = 0;
        for (int i = 0; i < n; i++){
            if (maxElem[i] == MAX) ans += nums[i];
        }

        return ans;
    }
};