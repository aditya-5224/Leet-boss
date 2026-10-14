class Solution {
public:
    vector<bool> canEat(vector<int>& c, vector<vector<int>>& q) {
        int n = c.size();
        vector<long long> sum(n, 0);
        sum[0] = c[0];
        for (int i = 1; i < n; i++) sum[i] = sum[i-1]+c[i];

        vector<bool> ans;
        for (auto& i : q){
            int favC = i[0];
            long long favD = i[1], dailyCap = i[2];
            long long totalPrev = favC == 0 ? 0 : sum[favC-1];

            if ((favD+1)*dailyCap <= totalPrev || favD+1 > sum[favC]) ans.push_back(false);
            // else if (favD+1 > sum[favC])
            else ans.push_back(true);
        }

        return ans;
        
    }
};