class Solution {
public:
    vector<int> nextGreaterElements(vector<int> &arr) {
        int n=arr.size();
        vector<int> nge2(n);
        stack<int> stk;
        for(int i=2*n-1; i>=0; i--){
            int index = i%n;
            while(!stk.empty() && arr[index]>=stk.top())
                stk.pop();
            if(i<n){
                if(stk.empty())
                    nge2[i] = -1;
                else
                    nge2[i] = stk.top();
            }
            stk.push(arr[index]);
        }
        return nge2;
    }
};