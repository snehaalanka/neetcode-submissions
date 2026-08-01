class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        int count = 0;
        int prefixSum = 0;
        mpp[0] = 1;
        for( int i =0 ; i<n ; i++){
            prefixSum+=nums[i];
            if(mpp.find(prefixSum-k) != mpp.end()){
                count+=mpp[prefixSum-k];
            }
            mpp[prefixSum]++;

        }
        return count;
    }
};