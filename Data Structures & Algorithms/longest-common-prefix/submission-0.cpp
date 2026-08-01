class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(auto it : strs){
           while(it.find(prefix)!=0){
            prefix.pop_back();
            if(prefix.empty()) prefix = "";
           }
        }
        return prefix;
    }
};