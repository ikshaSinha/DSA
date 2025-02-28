class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxcnt=0;
        for(char ch :s){
            if(ch=='('){
                count++;
            }
            else if(ch==')'){
                count--;
            }
            else continue;
            maxcnt = max(maxcnt , count);
        }
        return maxcnt;
    }
};