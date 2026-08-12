#include <bits/stdc++.h>
using namespace std;
// Brute
// vector<int> majority_elem(vector<int> &arr){
//     vector<int> ans;
//     for(int i = 0;i < arr.size();i++){
//         if(i == 0 || ans[0] != arr[i]){
//             int count = 0;
//             for(int j = 0;j < arr.size();j++){
//                 if(arr[i] == arr[j]) count ++;
//             }
//             if(count > arr.size()/3) ans.push_back(arr[i]);
//             if(ans.size() == 2) break;
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
// }

// Better

// vector<int> majority_elem(vector<int> &arr){
//     unordered_map<int,int> mpp;
//     vector<int> ans;
//     int min = arr.size()/3 + 1;
//     for(int i = 0;i < arr.size();i++){
//             mpp[arr[i]]++;
//             if(mpp[arr[i]] == min) ans.push_back(arr[i]);
//             if(arr.size() == 2) break;
//     }
//     return ans;
// }

// Optimal
vector<int> majority_elem(vector<int> &arr){
    vector<int> ans;
    int count1 = 0,count2 = 0,ele1 = INT_MIN,ele2 = -1;
    for(int i = 0;i < arr.size();i++){
        if(count1 == 0 && arr[i] != ele2){
            count1 = 1;
            ele1 = arr[i];
        }
        else if(count2 == 0 && arr[i] != ele1){
            count2 = 1;
            ele2 = arr[i];
        }
        else if(arr[i] == ele1) count1++;
        else if(arr[i] == ele2) count2++;
        else{
            count1--;
            count2--;
        }
    }
    int c1 = 0, c2 = 0;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] == ele1) c1++;
        else if(arr[i] == ele2) c2++;
    }
    if(c1 >= arr.size()/3) ans.push_back(ele1);
    if(c2 >= arr.size()/3 && ele1 != ele2) ans.push_back(ele2);
    return ans;
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    vector<int> ans = majority_elem(arr);
    for(int i = 0;i < ans.size();i++) cout << ans[i] << "\t";
    return 0;
}