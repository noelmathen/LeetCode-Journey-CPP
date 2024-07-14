//OPTIMAL SOLUTION
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0, r=0, n=fruits.size(), maxNum=0;
        unordered_map<int, int> mapp;
        while(r<n){
            mapp[fruits[r]]++;
            if(mapp.size()>2){
                mapp[fruits[l]]--;
                if(mapp[fruits[l]]==0)
                    mapp.erase(mapp.find(fruits[l]));
                l++;
            }
            if(mapp.size()<=2){
                maxNum = max(maxNum, r-l+1);
            }
            r++;
        }
        return maxNum;
    }
};



// //BETTER SOLUTION
// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int l=0, r=0, n=fruits.size(), maxNum=0;
//         unordered_map<int, int> mapp;
//         while(r<n){
//             mapp[fruits[r]]++;
//             while(mapp.size()>2){
//                 mapp[fruits[l]]--;
//                 if(mapp[fruits[l]]==0)
//                     mapp.erase(mapp.find(fruits[l]));
//                 l++;
//             }
//             if(mapp.size()<=2){
//                 maxNum = max(maxNum, r-l+1);
//                 r++;
//             }
//         }
//         return maxNum;
//     }
// };


//BRUTE FORCE SOLUTION
// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int n=fruits.size(), maxNum=0;
//         unordered_set<int> sett;
//         for(int i=0; i<n; i++){
//             sett.clear();
//             for(int j=i; j<n; j++){
//                 sett.insert(fruits[j]);
//                 if(sett.size()>2)
//                     break;
//                 maxNum = max(maxNum, j-i+1);
//             }
//         }
//         return maxNum;
//     }
// };
