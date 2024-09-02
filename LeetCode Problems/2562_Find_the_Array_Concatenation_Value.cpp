class Solution {
public:
    long long findPlaces(long long x){
        long long places=1;
        while(x>0){
            x /= 10;
            places *= 10;
        }
        return places;
    }

    long long findTheArrayConcVal(vector<int>& nums) {
        long long i=0, j=nums.size()-1, concat=0;
        while(i<=j){
            if(i==j){
                concat+=nums[i];
                return concat;
            }
            concat += (nums[i] * findPlaces(nums[j]) + nums[j]);
            i++;
            j--;
        }
        return concat;
    }
};