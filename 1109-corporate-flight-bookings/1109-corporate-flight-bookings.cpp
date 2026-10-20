class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& b, int n) {
        vector<int> ans(n);
        for (auto& i : b){
            ans[i[0]-1] += i[2];
            if (i[1] < n) ans[i[1]] -= i[2];
        }

        for (int i = 1; i < ans.size(); i++) ans[i] += ans[i-1];
        
        return ans;
    }
};