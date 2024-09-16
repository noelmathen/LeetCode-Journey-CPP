// Using unordered set O(n) TC
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sett;
        int maxCount=1, count=1;
        if(nums.empty())
            return 0;
        for(int x : nums)
            sett.insert(x);
        for(auto x : sett){
            if(sett.find(x-1) == sett.end()){
                count=1;
                int temp = x;
                while(sett.find(temp+1) != sett.end()){
                    count++;
                    temp = temp + 1;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};

// //Using ordered set O(nlogn) TC
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         set<long long> sett;
//         long long count=1, maxCount=1;
//         if(nums.empty())
//             return 0;
//         for(long long x : nums)
//             sett.insert(x);
//         for(auto itr=sett.begin(); itr!= --sett.end(); itr++){
//             if(*(next(itr)) == (*itr)+1)
//                 maxCount = max(maxCount, ++count);
//             else
//                 count=1;
//         }
//         return maxCount;
//     }
// };