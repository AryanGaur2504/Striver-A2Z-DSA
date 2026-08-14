#include <bits/stdc++.h>
using namespace std;
// Brute
// vector<vector<int>> four_sum(vector<int> &arr,int target){
//     int size = arr.size();
//     set<vector<int>> st;
//     for(int i = 0;i < size;i++){
//         for(int j = i + 1;j < size;j++){
//             for(int k = j + 1;k < size;k++){
//                 for(int l = k+1;l < size;l++){
//                     if((arr[i] + arr[j] + arr[k] + arr[l]) == target){
//                         vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
//                         sort(temp.begin(),temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(),st.end());
//     return ans;
// }
// TC --> O(N^4);
// SC --> O(2*Quads);


// Better
// vector<vector<int>> four_sum(vector<int> &arr,int target){
//     int size = arr.size();
//     set<vector<int>> st;
//     for(int i = 0;i < size;i++){
//         for(int j = i + 1;j < size;j++){
//             set<int> hash_map;
//             for(int k = j + 1;k < size;k++){
//                 int required = target - (arr[i] + arr[j] + arr[k]);
//                 if(hash_map.find(required) != hash_map.end()){
//                     vector<int> temp = {arr[i],arr[j],arr[k],required};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 hash_map.insert(arr[k]);
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(),st.end());
//     return ans;
// }
// TC --> O(N^3);
// SC --> O(N + 2*Quads);


// Optimal
vector<vector<int>> four_sum(vector<int> &arr,int target){
    int size = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i = 0;i < size;i++){
        if(i > 0 && arr[i-1] == arr[i]) continue;
        for(int j = i+1;j < size;j++){
            if(j > i + 1 && arr[j - 1] == arr[j]) continue;
            int k = j+1;
            int l = size - 1;
            while(k < l){
                //To Prevent Integer Overflow
                long long sum = arr[i];
                sum+= arr[j];
                sum+= arr[k];
                sum+= arr[l];
                if(sum == target){
                    ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                    k++;
                    l--;
                    while(k < l && arr[k - 1] == arr[k]) k++;
                    while(k < l && arr[l + 1] == arr[l]) l--;
                }
                else if(sum < target){
                    k++;
                }
                else{
                    l--;
                }
            }
        }
    }
    return ans;
}
// TC --> O(N^3);
// SC --> O(Quads);


int main(){
    int size,target;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cin >> target;
    vector<vector<int>> ans = four_sum(arr,target);
    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < 4;j++) cout << ans[i][j] << "\t";
    cout << endl;
    }
    return 0;
}