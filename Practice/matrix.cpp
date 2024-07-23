#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int a[100][100], b[100][100], c[100][100], sum[100][100];
    int n=5, m=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<endl;
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
    }

    int x[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int y[3][4]={
        {7, 8},
        {9, 10},
        {11, 12}
    };
    int mul[2][2]={0};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<3; k++){
                mul[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    for(int i=0; i<2; i++){
        cout<<endl;
        for(int j=0; j<2; j++){
            cout<<mul[i][j]<<" ";
        }
    }



    int rows = 3, cols = 4;
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int transpose[4][3];

    // Transpose
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output transpose
    cout << "The transpose matrix is:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }


    vector<vector<int>> matrixx(3, vector<int>(4));
    cout << "Enter elements of the matrixx:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> matrixx[i][j];
        }
    }
    // Output elements
    cout << "The matrixx is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matrixx[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
// 1 2 3 4 5
// 3 5 6 9 8
// 7 8 9 4 5
// 1 2 3 6 5
// 7 8 2 1 5