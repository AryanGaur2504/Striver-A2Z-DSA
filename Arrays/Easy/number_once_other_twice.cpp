#include <bits/stdc++.h>
using namespace std;
//Bruteforce
// int single_appearance(vector<int> &arr){
//     for(int i = 0;i < arr.size();i++){
//         int count = 0;
//         for(int j = 0;j < arr.size();j++){
//             if(arr[i] == arr[j]) count++;
//         }
//         if(count == 1) return arr[i];
//     }
//     return -1;
// }

// TC --> O(N*N);
// SC --> O(1);

//Better(Hashing)
// int single_appearance(vector<int> &arr){
//     unordered_map<int,int> mpp;
//     for(int i = 0;i < arr.size();i++){
//         mpp[arr[i]]++;
//     }
//     for(int i = 0;i < arr.size();i++){
//         if(mpp[arr[i]] == 1) return arr[i];
//     }
//     return -1;
// }

// TC --> O(2*N)
// SC --> O(N)

// Optimal(XOR)
int single_appearance(vector<int> &arr){
    int XOR = 0;
    for(int i = 0;i < arr.size();i++){
        XOR = XOR^arr[i];
    }
    return XOR;
}
// TC --> O(N);
// SC --> O(1);
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cout << single_appearance(arr);
    return 0;
}