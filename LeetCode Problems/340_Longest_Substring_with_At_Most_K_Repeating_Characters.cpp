//OPTIMAL SOLUTION
#include<unordered_map>
int kDistinctChars(int k, string &str)
{
    int n=str.size(), l=0, r=0, maxNum=0;
    unordered_map<char, int> mapp;
    while(r<n){
        mapp[str[r]]++;
        if(mapp.size()>k){
            mapp[str[l]]--;
            if(mapp[str[l]]==0)
                mapp.erase(mapp.find(str[l]));
            l++;
        }
        if(mapp.size()<=k)
            maxNum = max(maxNum, r-l+1);
        r++;
    }
    return maxNum;
}




// //BRUTE FORCE
// int kDistinctChars(int k, string &str)
// {
//     int n=str.size(), l=0, r=0, maxNum=0;
//     unordered_set<int> sett;
//     for(int i=0; i<n; i++){
//         sett.clear();
//         for(int j=i; j<n; j++){
//             sett.insert(str[j]);
//             if(sett.size()>k)
//                 break;
//             maxNum = max(maxNum, j-i+1);
//         }
//     }
//     return maxNum;
// }

