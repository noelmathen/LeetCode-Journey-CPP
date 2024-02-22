#include<iostream>
#include<vector>
using namespace std;      

int main()
{
    vector<int> v1; //basic declration of empty vector. type is specified.
    v1 = {1, 2, 3, 4, 5};   //putting objects inside vector
    // for(int i:v1)   //iterating trhough the elements in vector
    // {
    //     cout<<i<<endl;
    // }

    vector<int> v2(v1); //   vector<int> v2=v1   //to copy elemtns from one to ohter
    vector<string> v3 = {"hi", "hello"};  // insitialization while delceation
    vector<string> v4{"hi", "hello"};      // same thign, diff syntax

    vector<int> v5(5, -2); //vector of 5 int elements where each element is initialized to -2
    vector<string> v6(7, "egg");    // 7 elements where each element is "egg"
    vector<int> v7(5);   // 5 int elements where each element is initialized to 0(0 is default);

    vector<string> v10(10);
    vector<string> v8{10};  //both of them are same


    //addding elements into the vector
    vector<int> v9={1, 2, 3, 4, 5, 6, 7, 8};
    for(int i=0; i<10; i++)
    {
        v9.push_back(i);
        cout<<v9[i];
    }


    // for(int i=0; i<v1.size(); i++)
    // {
    //     cout<<i<<endl;
    // }
    return 0;
}

