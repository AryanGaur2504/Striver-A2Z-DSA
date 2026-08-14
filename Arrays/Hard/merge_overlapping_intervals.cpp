#include <bits/stdc++.h>
using namespace std;
// Brute
// vector<vector<int>> merge_overlapping_intervals(vector<vector<int>> &arr){
//     vector<vector<int>> ans;
//     sort(arr.begin(),arr.end());
//     for(int i = 0;i < arr.size();i++){
//         if(!ans.empty() && arr[i][0] <= ans.back()[1]) continue;
//         else{
//             int start = arr[i][0];
//             int end = arr[i][1];
//             for(int j = i;j < arr.size();j++){
//                 if(arr[j][0] <= end){
//                     end = max(arr[j][1],end);
//                 }
//                 else{
//                     break;
//                 }
//             }
//             ans.push_back({start,end});
//         }
//     }
//     return ans;
// }
// TC --> O(2*N);
// SC --> O(1);
vector<vector<int>> merge_overlapping_intervals(vector<vector<int>> &arr){
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i = 0;i < arr.size();i++){
        if(!ans.empty() && arr[i][0] <= ans.back()[1]){
            ans.back()[1] = max(ans.back()[1],arr[i][1]);
        }
        else{
            ans.push_back({arr[i][0],arr[i][1]});
        }
    }
    return ans;
}
// TC --> O(N);
// SC --> O(1);
int main(){
    int size;
    cin >> size;
    vector<vector<int>> arr(size,vector<int>(size));
    for(int i = 0;i < size;i++){
        for(int j = 0;j < 2;j++) cin >> arr[i][j];
    }
    vector<vector<int>> ans = merge_overlapping_intervals(arr);
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < 2;j++) cout << ans[i][j] << "\t";
        cout << endl;
    }
}