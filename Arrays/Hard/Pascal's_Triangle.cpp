#include <bits/stdc++.h>
using namespace std;
//Variety 1 --> To Return Element At Given Location


int NcR(int n,int r){
    int res = 1;
    for(int i = 0;i < r;i++){
        res*= (n-i);
        res/= i + 1;
    }
    return res;
}
// TC --> O(R);
int element_at_given_location(int row,int col){
    return NcR(row-1,col-1);
}
// TC --> O(col);
// SC --> O(1);
//Variety 2 --> To Print The Nth Row Of Triangle
//Brute
// vector<int> nth_row(int row){
//     vector<int> ans;
//     //No Of Col = No Of Rows
//     for(int i = 1;i <= row;i++){
//         ans.push_back(element_at_given_location(row,i));
//     }
//     return ans;
// }
// TC --> O(row*col);
// SC -->O(1);

//Optimal
vector<int> nth_row(int row){
    vector<int> ans;
    ans.push_back(1);
    //Taking Col As Zero Based Indexing
    int res = 1;
    for(int i = 1;i < row;i++){
        res *= (row - i);
        res /= i;
        ans.push_back(res);
    }
    return ans;
}
// TC --> O(R);
// SC--> O(1);

//Variety - 3(Print Whole Triangle)
vector<vector<int>> pascals_triangle(int row){
    vector<vector<int>> ans;
    for(int i = 1;i <= row;i++){
        ans.push_back(nth_row(i));
    }
    return ans;
}
// TC --> O(R*R);
int main(){
    int row;
    cin >> row;
    vector<vector<int>> ans = pascals_triangle(row);
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j <= i;j++) cout << ans[i][j] << "\t";
        cout << endl;
    }
    return 0;
}