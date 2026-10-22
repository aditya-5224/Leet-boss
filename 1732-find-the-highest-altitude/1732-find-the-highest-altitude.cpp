class Solution {
public:
    int largestAltitude(vector<int>& g) {
        int sum = 0, ans = 0;
        for (int i : g){
            sum += i;
            ans = max(ans, sum);
        }

        return ans;
        
    }
};