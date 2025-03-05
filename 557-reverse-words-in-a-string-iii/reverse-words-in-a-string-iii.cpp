class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        string ans="";
        while(i<n){
            if(s[i]== ' '){
                i++;
            }
            if(i==n) break;
            int j=i;
            while(j<n && s[j] !=' '){
                j++;
            }
            string sub=s.substr(i,j-i);
            reverse(sub.begin() , sub.end());
            
            if(!ans.empty()){
                ans +=" ";
            }
            ans +=sub;
            i=j+1;
        }
        return ans;
    }
};