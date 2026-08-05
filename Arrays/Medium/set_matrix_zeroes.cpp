#include <bits/stdc++.h>
using namespace std;
// Brute
// bool search_row(vector<vector<int>> &mat,int row){
//     for(int j = 0;j < mat[0].size();j++){
//         if(mat[row][j] == 0) return true; 
//     }
//     return false;
// }
// bool search_col(vector<vector<int>> &mat,int col){
//     for(int i = 0;i < mat.size();i++){
//         if(mat[i][col] == 0) return true; 
//     }
//     return false;
// }
// void set_matrix_zero(vector<vector<int>> &mat){
//     for(int i = 0;i < mat.size();i++){
//         for(int j = 0;j < mat[0].size();j++){
//             if(mat[i][j] == 1){
//                 if(search_row(mat,i) || search_col(mat,j)){
//                     mat[i][j] = -1;
//                 }
//             }
//         }
//     }
//     for(int i = 0;i < mat.size();i++){
//         for(int j = 0; j < mat[0].size();j++){
//             if(mat[i][j] == -1) mat[i][j]++;
//         }
//     }
// }
// TC--> O(rows*col*rows/col);
// SC--> O(1);

// Better
// void set_matrix_zero(vector<vector<int>> &mat){
//     vector<int> row(mat.size(),0);
//     vector<int> col(mat[0].size(),0);
//     for(int i = 0;i < mat.size();i++){
//         for(int j = 0;j < mat[0].size();j++){
//             if(mat[i][j] == 0){
//                 row[i] = 1;
//                 col [j] = 1;
//             }
//         }
//     }
//     for(int i = 0;i < mat.size();i++){
//         for(int j = 0;j < mat[0].size();j++){
//             if(row[i] || col[j]){
//                 mat[i][j] = 0;
//             }
//         }
//     }
//  }
// TC --> O(2*rows*col);
// SC --> O(rows + col);

// Optimal
void set_matrix_zero(vector<vector<int>> &mat){
    bool first_row_zero = false;
    bool first_col_zero = false;
    for(int i = 0;i < mat.size();i++){
        if(mat[i][0] == 0) first_col_zero = true;
    }
    for(int j = 0;j < mat[0].size();j++){
        if(mat[0][j] == 0) first_row_zero = true;
    }
    for(int i = 0;i < mat.size();i++){
        for(int j = 0;j < mat[0].size();j++){
            if(mat[i][j] == 0){
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }
    for(int i = 1;i < mat.size();i++){
        for(int j = 1;j < mat[0].size();j++){
            if(mat[i][0] == 0 || mat[0][j] == 0){
                mat[i][j] = 0;
            }
        }
    }
    if(first_col_zero){
        for(int i = 0;i < mat.size();i++){
            mat[i][0] = 0;
        }
    }
    if(first_row_zero){
        for(int j = 0;j < mat[0].size();j++){
            mat[0][j] = 0;
        }
    }
}
// TC --> O(2*rows*col);
// SC --> O(1);

int main(){
    int rows;
    int col;
    cin >> rows >> col;
    vector<vector<int>> mat(rows,vector<int>(col));
    for(int i = 0;i < rows;i++){
        for(int j = 0; j < col;j++) cin >> mat[i][j];
    }
    set_matrix_zero(mat);
    for(int i = 0;i < rows;i++){
        for(int j = 0; j < col;j++) cout << mat[i][j] << "\t";
        cout << endl;
    }
    return 0;
}