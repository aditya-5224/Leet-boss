class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        // 0 0 0 0 0 1
        // 0 1 0 1 0 
        for (int i = 0; i < f.size(); i++){
            bool l = (i == 0 || f[i-1] == 0);
            bool r = (i == f.size()-1 || f[i+1] == 0);
            
            if (l && r && f[i] == 0) {
                n--;
                f[i] = 1;
            } 
        }

        return n <= 0;
        
    }
};