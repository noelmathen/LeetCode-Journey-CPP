#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int T, X;
    cin>>T;
    vector<string> answer;
    for(int i=0; i<T; i++){
        cin>>X;
        if(X<=15){
            answer.push_back("YES");
        }
        else{
            answer.push_back("NO");
        }
    }
    for(auto i:answer){
        cout<<i<<endl;
    }
}
