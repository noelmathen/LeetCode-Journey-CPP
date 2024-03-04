#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int T, X;
    cin<<T;
    vector<string> answer;
    for(int i=0; i<T; i++){
        cin<<X;
        if(X>98){
            answer.append("YES");
        }
        else{
            answer.append("NO");
        }
    }
    for(auto i:answer){
        cout<<i<<endl;
    }
}
