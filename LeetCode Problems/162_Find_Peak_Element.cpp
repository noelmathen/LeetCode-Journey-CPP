//Optimal Solution
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        long long int low=0, n=nums.size(), high=n-1, mid, leftElement, rightElement;
        while(low<=high){
            
            mid = low + (high-low)/2;
            mid<=0 ? leftElement = LONG_MIN : leftElement = nums[mid-1];
            mid >= n-1 ? rightElement = LONG_MIN : rightElement = nums[mid+1];

            if(leftElement<nums[mid] && rightElement<nums[mid])
                return mid;
            else{
                if(leftElement>nums[mid])
                    high = mid-1;
                else if(rightElement>nums[mid])
                    low = mid+1;
            }
        }
        return mid;
    }
};


// //MY Stupid Solution
// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int low=0, n=nums.size(), high=n-1, mid;
//         while(low<=high){
//             mid = low + (high-low)/2;
//             if(nums.size()==1)
//                 return 0;
//             if(high-low+1==2)
//                 return nums[low]>nums[high] ? low : high;
//             if(mid==0)
//                 return mid;
//             if(mid==n-1)
//                 return mid;
//             if(nums[mid-1]<nums[mid] && nums[mid+1]<nums[mid])
//                 return mid;
//             else{
//                 if(nums[mid-1]>nums[mid])
//                     high = mid-1;
//                 else if(nums[mid+1]>nums[mid])
//                     low = mid+1;
//             }
//         }
//         return mid;
//     }
// };