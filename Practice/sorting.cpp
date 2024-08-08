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

void insertion_sort(vector<int>& arr){
    int n=arr.size(), j;
    for(int i=1; i<n; i++){
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> tempVector;
    int l=low, r=mid+1;
    while(l<=mid && r<=high){
        if(arr[l]<=arr[r]){
            tempVector.push_back(arr[l++]);
        }
        else{
            tempVector.push_back(arr[r++]);
        }
    }
    while(l<=mid){
        tempVector.push_back(arr[l++]);
    }
    while(r<=high){
        tempVector.push_back(arr[r++]);
    }

    for(int i=low; i<=high; i++){
        arr[i]=tempVector[i-low];
    }
}

void merge_sort(vector<int>& arr, int low, int high){
    int n=arr.size();
    if(low>=high)
        return;

    int mid = (low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    int n, min, x;
    vector<int> arr={8, 6, 1, 6, 7, 3, 9, 8, 2, 4 ,6 ,8 ,3 , 35};
    // cout<<"Enter the number of elements: ";
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cin>>x;
    //     arr.push_back(x);
    // }

    // selection_sort(arr);
    // bubble_sort(arr);
    // insertion_sort(arr);

    n=arr.size();
    merge_sort(arr, 0, n-1);

    for(auto i:arr){
        cout<<i<<" ";;
    }

    return 0;
}