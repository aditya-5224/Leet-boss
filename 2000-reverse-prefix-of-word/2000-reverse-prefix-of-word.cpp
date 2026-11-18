class Solution {
public:
    string reversePrefix(string s, char ch) {
        int indx = -1;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ch){
                indx = i;
                break;
            }
        }
        if (indx != -1) reverse(s.begin(), s.begin()+indx+1);
        return s;
        
    }
};