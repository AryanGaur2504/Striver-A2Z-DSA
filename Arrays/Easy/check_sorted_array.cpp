#include <bits/stdc++.h>
using namespace std;
// Brute
// bool is_sorted(vector<int> &arr){
//     for(int i = 0;i < arr.size();i++){
//         for(int j = i+1;j < arr.size();j++){
//             if(arr[j] >= arr[i]){}
//             else return false;
//         }
//     }
//     return true;
// }
// TC --> O(N^2);
// SC --> O(1);

// Optimal
bool is_sorted(vector<int> &arr){
    for(int i = 0;i < arr.size()-1;i++){
        if(arr[i] > arr[i+1]) return false; 
    }
    return true;
}
// TC --> O(N);
// SC --> O(1);

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cout << is_sorted(arr);
    return 0;
}