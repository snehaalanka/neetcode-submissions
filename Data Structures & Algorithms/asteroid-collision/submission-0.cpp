class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        for(int i: asteroids){
            bool alive = true;
            while(alive && i<0 && !st.empty() && st.top()>0){
                if(st.top()<-i){
                    st.pop();
                }
                else if(st.top()== -i){
                    st.pop();
                    alive = false;
                }
                else{
                    alive = false;
                }
            }
            if(alive){
                st.push(i);
            }
        }
        vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }

};