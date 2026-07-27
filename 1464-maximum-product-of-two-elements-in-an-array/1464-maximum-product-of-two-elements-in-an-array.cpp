class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0;
        for (int i : nums){
            if (i >= max1){
                max2 = max1;
                max1 = i;
            }
            else {
                max2 = max(max2, i);
            }
        }

        return (max1-1)*(max2-1);
        
    }
};