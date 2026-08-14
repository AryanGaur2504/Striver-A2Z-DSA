#include <bits/stdc++.h>
using namespace std;
// Brute
// int subarray_with_given_xor(vector<int> &arr,int XOR){
//     int count = 0;
//     for(int i = 0;i < arr.size();i++){
//         int XOR1 = 0;
//         for(int j = i;j < arr.size();j++){
//             XOR1 = XOR1^arr[j];
//             if(XOR1 == XOR) count++;
//         }
//     }
//     return count;
// }
// TC --> O(N*N);
// SC --> O(1);
// Optimal
int subarray_with_given_xor(vector<int> &arr,int XOR){
    map<int,int> mpp;
    int count = 0;
    mpp[0] = 1;
    int XOR1 = 0;
    for(int i = 0;i < arr.size();i++){
        XOR1 = XOR1^arr[i];
        int required = XOR1^XOR;
        count+= mpp[required];
        mpp[XOR1]++;
    }
    return count;
}
// TC --> O(N);
// SC --> O(N);
int main(){
    int size,XOR;
    cin >> size;
    vector<int>arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cin >> XOR;
    cout << subarray_with_given_xor(arr,XOR);
    return 0;
}