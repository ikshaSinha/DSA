class Solution {
public:
    string longestPalindrome(string s) {
        int n =s.size();
        int start=0;
        if(n<=1) return s;
        int maxLen=1;

        auto expandFromCentre = [&](int l,int r){
            while(l>=0 && r<n &&s[l]==s[r]){
                int len = r-l+1;
                if(len >maxLen){
                    maxLen = len;
                    start=l;
                }
                l--;
                r++;
            }
        };
            for(int i=0;i<n;i++){
                expandFromCentre(i,i);
                  expandFromCentre(i,i+1);
            }
        
        return s.substr(start , maxLen);
    }
};