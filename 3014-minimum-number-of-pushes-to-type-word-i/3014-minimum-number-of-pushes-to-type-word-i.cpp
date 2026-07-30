class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size(), ans = 0, i = 1;
        if (n <= 8){
            ans = n;
        }
        else if (n <= 16){
            ans = 8 + (n-8)*2;
        }
        else if (n <= 24){
            ans = 24 + (n-16)*3;
        }
        else{
            ans = 48 + (n-24)*4;
        }

        return ans;
    }
};