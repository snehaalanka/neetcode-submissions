class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele1 = -1;
        int ele2 = -1;
        int count1 = 0;
        int count2 = 0;
        for(int i : nums){
            if(i == ele1) count1++;
            else if(i == ele2) count2++;
            else if(count1==0){
                ele1 = i;
                count1++;
            }
            else if(count2==0){
                ele2 = i;
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        vector<int> ans;
        count1 =0;
        count2= 0;
        for(int i : nums){
            if(i == ele1) count1++;
            if(i == ele2) count2++;
        }
        if(count1> n/3) ans.push_back(ele1);
        if(count2> n/3 && ele1!=ele2) ans.push_back(ele2);
        return ans;
    }
};