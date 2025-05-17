class Solution {
  public:
    long long solve(vector<int>& bt) {
        long long time=0, wt=0;
        sort(bt.begin(), bt.end());
        for(int i=0; i<bt.size()-1; i++){
          time += bt[i];
          wt += time;
        }
        return wt/bt.size();
    }
};