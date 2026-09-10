class Solution {
public:
    int check(int i, vector<int>& arr, int m, int k) {
        int adj = 0;
        int cnt = 0;
        for (int j = 0; j < arr.size(); j++){
                if (arr[j] <= i){
                    adj++;
                    if (adj == k){
                        cnt++;
                        adj = 0;
                    }
                }
                else{
                    adj = 0;
                }
            }

        if (cnt >= m) return 1;
        else return 0;

    }
    int minDays(vector<int>& arr, int m, int k) {
        int r = *max_element(arr.begin(), arr.end());
        int l = *min_element(arr.begin(), arr.end());
        int ans = -1;

        // for (int i = minn; i <= maxx; i++){
        //     int adj = 0;
        //     int cnt = 0;
        //     for (int j = 0; j < arr.size(); j++){
        //         if (arr[j] <= i){
        //             adj++;
        //             if (adj == k){
        //                 cnt++;
        //                 adj = 0;
        //             }
        //         }
        //         else{
        //             adj = 0;
        //         }
        //     }

        //     if (cnt >= m) return i;
        // }

        while (l <= r) {
            int mid = l + (r-l)/2;
            if (check(mid, arr, m, k)) {
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }

        return ans;

        
    }
};