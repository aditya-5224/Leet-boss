class Solution {
public:
    bool checkString(string s) {
        int check = 0;
        for (auto& i : s){
            if (i == 'b') check = 1;
            else if (check) return false;
        }

        return true;
        
    }
};