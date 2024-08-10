class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floor = INT_MIN, ceil = INT_MAX;
        for(auto ele : arr){
            if(ele==x)
                return {ele, ele};
            else if(ele<x)
                floor = max(floor, ele);
            else
                ceil = min(ceil, ele);
        }
        if(floor==INT_MIN) floor = -1;
        if(ceil==INT_MAX) ceil = -1;
        return {floor, ceil};
    }
};