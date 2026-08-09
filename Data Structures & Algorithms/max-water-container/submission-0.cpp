class Solution {
public:
    int maxArea(vector<int>& heights) {
        int val = 0;
        int maxi = 0;
        int i = 0;
        int j = heights.size()-1;
        while(i<j){
            if(heights[i]<=heights[j]){
                val = (j-i)*heights[i];
                maxi = max(maxi , val);
                i++;
            }
            else{
                val = (j-i)*heights[j];
                maxi = max(maxi , val);
                j--;
            }
        }
        return maxi;
    }
};
