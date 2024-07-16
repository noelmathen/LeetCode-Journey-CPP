class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest=0;
        for(int i=0; i<n; i++){
            if(arr[i]>largest)
                largest=arr[i];
        }
        return largest;
    }
};


// class Solution
// {
// public:
//     int largest(vector<int> &arr, int n)
//     {
//         set<int> sett(arr.begin(), arr.end());
//         // for(auto i:sett){
//         //     cout<<i<<" ";
//         // }
//         return *sett.rbegin();
//     }
// };

