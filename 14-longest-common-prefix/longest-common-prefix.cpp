class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string res;
        string first=strs[0];
        string last = strs[strs.size()-1];
        for(int i=0;i<first.size();i++){
            if(first[i]==last[i]){
                res.push_back(first[i]);
            }
            else break;
        }
        return res;
    }
};