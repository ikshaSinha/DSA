class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!= t.size()) return false;
       unordered_map<char , char> mapST;
       unordered_map<char , char> mapTS;
       for(int i=0;i<s.size();i++){
       char charS=s[i];
       char charT=t[i];
       if((mapST.count(charS) && mapST[charS]!=charT)||mapTS.count(charT)&&mapTS[charT]!=charS){
        return false;
       }
       mapST[charS]=charT;
       mapTS[charT]=charS;
       }
        return true;
    }
};