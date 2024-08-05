#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void selection_sort(vector<int>& arr){
    int n=arr.size(), min;
    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min])
                min = j;
        }
        if(min!=i)
            swap(arr[i], arr[min]);
    }
}

void bubble_sort(vector<int>& arr){
    int n=arr.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n, min, x;
    vector<int> arr;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }

    // selection_sort(arr);
    bubble_sort(arr);

    

    for(auto i:arr){
        cout<<i<<" ";;
    }

    return 0;
}