class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size()-1;
        int indx = -1;
        while (l <= r){
            int mid = l + (r-l)/2;
            if (letters[mid] > target){
                r = mid-1;
                indx = mid;
            }
            else{
                l = mid+1;
            }
        }

        return indx == -1 ? letters[0] : letters[indx];
    }
};