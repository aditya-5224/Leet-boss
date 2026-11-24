class Solution {
public:
    int check(int mid, vector<int>& nums, int m){
        long long k = 0;
        for (int i : nums){
            if (i > mid) k += ceil(i/(double)mid)-1;
        }

        return k <= m;
    }
    int minimumSize(vector<int>& nums, int m) {
        int lo = 1, hi = 1e9;
        while (lo <= hi) {
            int mid = lo+(hi-lo) / 2;
            if (check(mid, nums, m)) hi = mid-1;
            else lo = mid+1;
        }
        return lo;

    

    }
};