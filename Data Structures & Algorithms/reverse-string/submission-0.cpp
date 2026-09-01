class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0, r=s.size()-1;
        while(l<r){
            char temp1, temp2;
            temp1 = s[l];
            temp2 = s[r];
            s[l] = temp2;
            s[r] = temp1;
            l++;
            r--;
        }
    }
};