class Solution {
public:
    int check(int i, vector<int>& piles, int h){
        long long time = 0;
            for (int j = 0; j < piles.size();j++){
                time += (piles[j]+i-1)/i;
            }

            if (time <= h) {
                return 1;
            }
        return 0;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = *max_element(piles.begin(), piles.end());
        int ans = maxPile;
        // for (int i = 1; i <= maxPile; i++){
        //     int time = 0;
        //     for (int j = 0; j < piles.size();j++){
        //         time += (piles[j]+i-1)/i;
        //     }

        //     if (time <= h) {
        //         ans = i;
        //         break;
        //     }
        // }

        // return ans;
        int l = 1, r = maxPile; 
        while (l <= r) {
            int mid = l + (r-l)/2;
            if (check(mid, piles, h)) {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }

        return ans;
    }
};