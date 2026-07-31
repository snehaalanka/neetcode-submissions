class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,int> map;
        for(auto it : s){
            map[it]++;
        }
        for(char c : t){
            if(map[c]==0 || map.find(c)== map.end()){
                return false;
            }
            else{
                map[c]--;
            }
        }
        return true;
    }
};
