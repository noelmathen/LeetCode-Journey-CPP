class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> stk;
        vector<int> nums;
        bool flag;
        for(int i=n-1; i>=0; i--){
            if(asteroids[i] < 0){
                stk.push(asteroids[i]);
            }
            else{
                if(stk.empty()){
                    stk.push(asteroids[i]);
                    continue;
                }
                else if( !stk.empty() && stk.top()>0 ){
                    stk.push(asteroids[i]);
                }
                else{
                    if(!stk.empty() && abs(stk.top())<asteroids[i]){
                        stk.pop();
                        i++;
                        continue;
                    }
                    else if(!stk.empty() && abs(stk.top())>asteroids[i]){
                        continue;
                    }
                    else{
                        stk.pop();
                        continue;
                    }
                }
            }
        }
        while(!stk.empty()){
            nums.push_back(stk.top());
            stk.pop();
        }
        return nums;
    }
};