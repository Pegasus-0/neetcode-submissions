class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x=word1.size(), y=word2.size();
        string f;
        int i=0, j=0;
        while(i<x || j<y){
            if(i<x) f += word1[i];
            if(j<y) f += word2[j];
            i++;
            j++;
        }
        return f;
    }
};