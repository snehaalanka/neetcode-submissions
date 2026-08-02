class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(), nums.end());
        int ele;
        int count = 0;
        int maxi = 0;
        for(auto it : nums){
            if(st.find(it-1) == st.end()){
                ele = it;
                count = 1;
                while(st.find(ele+1) != st.end()){
                    count++;
                    ele++;
                }
                maxi = max(count , maxi);
            }
        }
        return maxi;
    }
};
