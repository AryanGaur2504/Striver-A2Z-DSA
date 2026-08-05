#include <bits/stdc++.h>
using namespace std;
// Brute
// vector<vector<int>> rotate_by_90(vector<vector<int>> &mat){
//     vector<vector<int>> ans(mat.size(),vector<int>(mat.size()));
//     for(int i = 0;i < mat.size();i++){
//         for(int j = 0; j < mat.size();j++){
//             ans[j][mat.size()-1-i] = mat[i][j];
//         }
//     }
//     return ans;
// }
// TC --> O(N*N);
// SC --> O(N*N);

//Optimal
void reverse_row(vector<vector<int>> &mat,int row){
    int left = 0;
    int right = mat.size()-1;
    while(left < right){
        swap(mat[row][left],mat[row][right]);
        left++;
        right--;
    }
}
void rotate_by_90(vector<vector<int>> &mat){
    for(int i = 0;i < mat.size()-1;i++){
        for(int j = i+1;j < mat.size();j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i = 0;i < mat.size();i++){
        reverse_row(mat,i);
    }
}
// TC --> O(N*N);
// SC --> O(1);

int main(){
    int size;
    cin >> size;
    vector<vector<int>> mat(size,vector<int>(size));
    for(int i = 0;i < size;i++){
        for(int j = 0;j < size;j++) cin >> mat[i][j];
    }
    rotate_by_90(mat);
    for(int i = 0;i < size;i++){
        for(int j = 0;j < size;j++) cout << mat[i][j] << "\t";
        cout << endl;
    }
}