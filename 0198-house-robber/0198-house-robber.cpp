class Solution {
public:
    int rob(vector<int>& arr) {
        int p1 = arr[0];
        if (arr.size() == 1) return p1;

        int p2 = max(p1, arr[1]);
        if (arr.size() == 2) return p2;

        int pick = 0, n_pick = 0, curr;
        for (int i = 2; i < arr.size(); i++){
            pick = arr[i]+p1;
            n_pick = p2;
            curr = max(pick, n_pick);

            p1 = p2;
            p2 = curr;

        }

        return p2;
    }
};