class Solution {
public:
    int compress(vector<char>& chars) {
            int ansIdx=0;
            int n = chars.size();
            int i=0;
            while(i<n){
                int j=i+1;
                while(j<n && chars[i]==chars[j]){
                    j++;
                }
                chars[ansIdx]=chars[i];
                ansIdx++;
                int count=j-i;
                if(count>1){
                    string cnt = to_string(count);
                    for(char ch :cnt){
                        chars[ansIdx]=ch;
                        ansIdx++;
                    }
                }
                i=j;
            }
            return ansIdx;
    }
};