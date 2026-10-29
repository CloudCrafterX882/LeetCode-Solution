class Solution {
public:
    int longestPalindrome(string s) {
        int count[128]={0};
        for(char c:s){
            count[c]++;
        }
        int l=0;
        bool odd = false;

        for(int m:count){
            l+=(m/2)*2;

            if(m%2!=0){
                odd=true;
            }
        }
        if(odd){
            l+=1;
        }
        return l;
    }
};