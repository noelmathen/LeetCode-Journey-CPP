//OPTIMAL ONE PASS SOLUTION - Dutch National Flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(), l=0, r=n-1, i=0;
        while(i<=r){
            if(nums[i]==0){
                swap(nums[i], nums[l]);
                l++;
                i++;
            }
            else if(nums[i]==1){
                i++;
            }
            else{
                swap(nums[i], nums[r]);
                r--;
            }
        }
    }
};



// //BRUTE FORCE?
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size(), zeroCount=0, oneCount=0, twoCount=0;
//         for(int i=0; i<n; i++){
//             if(nums[i]==0)
//                 zeroCount++;
//             else if(nums[i]==1)
//                 oneCount++;
//             else if(nums[i]==2)
//                 twoCount++;
//         }
//         for(int i=0; i<zeroCount; i++)
//             nums[i]=0;
//         for(int i=zeroCount; i<zeroCount+oneCount; i++)
//             nums[i]=1;
//         for(int i=zeroCount+oneCount; i<zeroCount+oneCount+twoCount; i++)
//             nums[i]=2;
//     }
// };
