#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n, min, x;
    vector<int> arr;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }

    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min])
                min = j;
        }
        if(min!=i)
            swap(arr[i], arr[min]);
    }

    for(auto i:arr){
        cout<<i<<" ";;
    }

    return 0;
}