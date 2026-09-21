class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& v) {
        int cnt = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size()-1; i++) {
            for (int j = i+1; j < v.size(); j++){
                if (v[i][1] >= v[j][0]) cnt++;
            }
        }

        return cnt;
        
    }
};