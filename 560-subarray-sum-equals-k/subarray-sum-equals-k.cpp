class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int ,int> mpp;
        int cnt=0;
        int preSum =0;
        mpp[0]=1;
        for(int i =0;i<n;i++){
            preSum+=nums[i];
            int rem = preSum-k;
            cnt+=mpp[rem];
            mpp[preSum]+=1;
        }
        return cnt;
        }
};