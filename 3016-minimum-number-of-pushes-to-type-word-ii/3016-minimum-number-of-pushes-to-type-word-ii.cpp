class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        vector<int>arr(26, 0);
        for (auto i : word){
            arr[i-'a']++;
        }

        sort(arr.begin(), arr.end(), greater<int>());
        int ans = 0;
        for (int i = 0; i < 26; i++){
            ans += (i/8 + 1)*arr[i];
        }

        return ans;
    }
};