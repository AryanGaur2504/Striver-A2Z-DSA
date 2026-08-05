#include <bits/stdc++.h>
using namespace std;
void spiral_transverse(vector<vector<int>> &mat){
    int top = 0;
    int left = 0;
    int right = mat.size() - 1;
    int bottom = mat.size() - 1;
    while(left <= right && top <= bottom){
        for(int i = left;i <= right;i++){
            cout << mat[top][i] << "\t";
        }
        top++;
        for(int i = top;i <= bottom;i++){
            cout << mat[i][right] << "\t";
        }
        right--;
        if(top <= bottom){
            for(int i = right;i >= left;i--){
            cout << mat[bottom][i] << "\t";
        }
        bottom--;
     }
     if(left <= right){
        for(int i = bottom;i >= top;i--){
            cout << mat[i][left] << "\t";
        }
        left++;
     }
    }
}

// TC -->O(N*N);
// SC -->O(1);

int main(){
    int size;
    cin >> size;
    vector<vector<int>> mat(size,vector<int>(size));
    for(int i = 0;i < size;i++){
        for(int j = 0;j < size;j++) cin >> mat[i][j];
    }
    spiral_transverse(mat);
    return 0;
}