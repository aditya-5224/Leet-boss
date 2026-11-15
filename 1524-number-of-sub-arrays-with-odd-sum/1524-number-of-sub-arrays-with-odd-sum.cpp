class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int cnt = 0, even_cnt = 1, odd_cnt = 0, sum = 0;
        for (int i : arr){
            sum += i;
            if (sum%2){
                cnt += even_cnt;
                odd_cnt++;
            }
            else {
                cnt += odd_cnt;
                even_cnt++;
            }
            cnt %= MOD;
        }

        return cnt%MOD;
        
    }
};