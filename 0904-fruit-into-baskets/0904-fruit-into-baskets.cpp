class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_set<int> s;
        unordered_map<int, int> mp;
        int l = 0, ans = 0;
        for (int r = 0; r < fruits.size(); r++){
            s.insert(fruits[r]);
            mp[fruits[r]]++;
            while (s.size() > 2){
                mp[fruits[l]]--;
                if (mp[fruits[l]] == 0) s.erase(fruits[l]);
                l++;
            }

            ans = max(ans, r-l+1);
        }

        return ans;
        
    }
};