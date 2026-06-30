class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0, n = s.size(), l = 0;
        // while (i < n){
        //     j = i;
        //     bool a = 0, b = 0, c = 0;
        //     while (j < n){
        //         if (s[j] == 'a') a = 1;
        //         else if (s[j] == 'b') b = 1;
        //         else c = 1;

        //         if (a*b*c){
        //             ans += (n-j);
        //             break;
        //         } 
        //         j++;
        //     }
        //     i++;
        // }
        vector<int> arr(3, 0);
        for (int r = 0; r < n; r++){
            arr[s[r]-'a']++;

            while (arr[0]*arr[1]*arr[2]){
                ans += (n-r);
                arr[s[l]-'a']--;
                l++;
            }
        }
        return ans;
    }
};