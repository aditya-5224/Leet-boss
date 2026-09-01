class Solution {
public:
    int minBishopMoves(vector<int>& s, vector<int>& t) {
        if (abs(s[0]-t[0]) == abs(t[1]-s[1])) return 1;
        else if ((s[0]+t[0])%2 != (s[1]+t[1])%2) return -1;
        else return 2;
        
    }
};