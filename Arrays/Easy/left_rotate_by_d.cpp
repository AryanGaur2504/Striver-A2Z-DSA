#include <bits/stdc++.h>
using namespace std;
// Brute
// void left_rotate_by_d(vector<int> &arr,int d){
//     //Prestoring
//     vector<int> pre_store(d);
//     for(int i = 0;i < d;i++){
//         pre_store[i] = arr[i];
//     }
//     //Shifting
//     for(int i = 0;i < arr.size() - d;i++){
//         arr[i] = arr[i+d];
//     }
//     //Pushing Back
//     for(int i = arr.size()-d;i < arr.size();i++){
//         arr[i] = pre_store[i-(arr.size()-d)];
//     }
// }
// TC --> O(N);
// SC --> O(d);

//Optimal
void left_rotate_by_d(vector<int> &arr,int d){
    reverse(arr.begin(),arr.begin() + d);
    reverse(arr.begin() + d,arr.end());
    reverse(arr.begin(),arr.end());
}

int main(){
    int size,d;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cin >> d;
    d = d % size;
    left_rotate_by_d(arr,d);
    for(int i = 0;i < size;i++) cout << arr[i] << "\t";
}