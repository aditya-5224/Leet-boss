class Solution {
public:
    bool sumGame(string num) {
        int A = 0, cntA = 0, B = 0, cntB = 0;
        int n = num.size();

        for (int i = 0; i < n; i++){
            if (i < n/2){
                if (num[i] == '?') cntA++;
                else A += num[i]-'0';
            }
            else{
                if (num[i] == '?') cntB++;
                else B += num[i]-'0';
            }
        }
        int d = A-B;       
        int cntDiff = cntA-cntB;
        
        if (cntDiff % 2 == 0) {
            return !(d * 2 == -cntDiff * 9);
        }
        
        return true;
    }
};