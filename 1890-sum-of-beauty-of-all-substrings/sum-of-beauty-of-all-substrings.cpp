class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int sum =0;
        int beauty=0;
        for(int i=0;i<n;i++){
            vector<int> freq(26,0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int maxVal = *max_element(freq.begin(),freq.end());
                int minVal = INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        minVal = min(minVal , freq[k]);
                    }
                }
                beauty = maxVal-minVal;
                 sum +=beauty;
            }
           
        }
        return sum;
    }
};