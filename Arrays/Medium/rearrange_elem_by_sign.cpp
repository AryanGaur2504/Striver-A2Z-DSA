#include<bits/stdc++.h>
using namespace std;
// Brute
// vector<int> rearrange_by_sign(vector<int> &arr){
//     vector<int> positive;
//     vector<int> negative;
//     vector<int> ans(arr.size());
//     for(int i = 0;i < arr.size();i++){
//         if(arr[i] > 0) positive.push_back(arr[i]);
//         else negative.push_back(arr[i]);
//     }
//     for(int i = 0;i < arr.size()/2;i++){
//         ans[2*i] = positive[i];
//         ans[2*i+1] = negative[i];
//     }
//     return ans;
// }

// Optimal
vector<int> rearrange_by_sign(vector<int> &arr){
    vector<int> ans(arr.size());
    int positive = 0;
    int negative = 1;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] > 0){
            ans[positive] = arr[i];
            positive += 2;
        }
        else{
            ans[negative] = arr[i];
            negative += 2;
        }
    }
    return ans;
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < arr.size();i++) cin >> arr[i];
    vector<int> ans = rearrange_by_sign(arr);
    for(int i = 0;i < size;i++) cout << ans[i] << "\t";
    return 0;
}