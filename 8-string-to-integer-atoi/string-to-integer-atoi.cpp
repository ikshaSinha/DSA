class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0) return 0;
        int i=0;
        while(i <s.size() &&s[i]==' '){
            i++;
        }
        if (i >= s.length()) return 0; 
        int sign=1;
        long ans =0;
        if(s[i]=='-') sign =-1;
        int max = INT_MAX;
        int min = INT_MIN;
        if (s[i] == '-' || s[i] == '+') i++;
        while(i<s.length()){
            if(s[i]==0) i++;
            if(s[i]==' '||!isdigit(s[i])) break;
            ans=ans*10+s[i]-'0';
            if(sign==-1&&-1*ans <min) return min;
            if(sign==1&& ans >max) return max;
            i++;
        }
        return (int)sign*ans;
    }
};