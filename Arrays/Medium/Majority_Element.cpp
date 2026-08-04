#include <bits/stdc++.h>
using namespace std;
// Brute
// int majority_element(vector<int> &arr){
//     for(int i = 0;i < arr.size();i++){
//         int count = 0;
//         for(int j = 0;j < arr.size();j++){
//             if(arr[i] == arr[j]) count++;
//         }
//         if(count > arr.size()/2) return arr[i];
//     }
//     return -1;
// }

// Better
// int majority_element(vector<int> &arr){
//     map<int,int> mpp;
//     for(int i = 0;i < arr.size();i++){
//         mpp[arr[i]]++;
//     }
//     for(int i = 0;i < arr.size();i++){
//         if(mpp[arr[i]] > arr.size()/2) return arr[i];
//     }
//     return -1;   
// }

//Optimal
int majority_element(vector<int> &arr){
    int count = 0,element;
    for(int i = 1;i < arr.size();i++){
        if(count == 0){
            element = arr[i];
        }
        if(arr[i] == element) count++;
        else count--;
    }
    int appearance = 0;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] == element) appearance++;
    }
    if(appearance > arr.size()/2) return element;
    return -1;
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cout << majority_element(arr);
    return 0;
}