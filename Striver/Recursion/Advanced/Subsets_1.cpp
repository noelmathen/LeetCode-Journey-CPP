class Solution {
    public:
      void subset1(int i, int sum, vector<int>& result, vector<int>& nums){
          if(i==nums.size()){
              result.push_back(sum);
              return;
          }
          subset1(i+1, sum+nums[i], result, nums);
          subset1(i+1, sum, result, nums);
      }
  
      vector<int> subsetSums(vector<int>& nums) {
          vector<int> result;
          subset1(0, 0, result, nums);
          return result;
      }
  };