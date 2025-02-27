class Solution {
public:

string removeDuplicates(string s) {
        int i=0;
        while(i<s.size()){
            if(s[i]==s[i+1]){
               s.erase(s.begin()+i, s.begin()+i+2);
               i=max(0,i-1);
            }else 
            i++;
        }
        return s;
    }
};