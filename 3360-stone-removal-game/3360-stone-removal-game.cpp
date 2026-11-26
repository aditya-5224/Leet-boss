class Solution {
public:
    bool canAliceWin(int n) {
        int a = 10, b = 9, check = 1;
        while (n) {
            if (check){
                if (n-a >= 0){
                    n -= a;
                    check = 0;
                    a = b-1;
                }
                else return false;
            }
            else{
                if (n-b >= 0){
                    n -= b;
                    check = 1;
                    b = a-1;
                }
                else return true;
            }
        }

        return check ? false : true;

        
    }
};