#include <bits/stdc++.h>
using namespace std;
//Brute
// int missing_number(vector<int> &arr){
//     int n = arr.size() + 1;
//     for(int i = 1;i <= n;i++){
//         bool found = false;
//         for(int j = 0;j < n-1;j++){
//             if(arr[j] == i) found = true;
//         }
//         if(!found) return i;
//     }
//     return -1;
// }
// Better
// int missing_number(vector<int> &arr){
//     int n = arr.size();
//     vector<int> hashmap(n+2,0); //+2 --> 0,Missing Number
//     for(int i = 0;i < n;i++){
//         hashmap[arr[i]]++;
//     }
//     for(int i = 1;i <= n+1;i++){
//         if(hashmap[i] == 0) return i;
//     }
//     return -1;
// }
// TC --> O(2*N)
// SC -->O(N)

// optimal - 1 (Sum)
// int missing_number(vector<int> &arr){
//     int n = arr.size() + 1;
//     int expected_sum = (n*(n+1))/2;
//     int sum = 0;
//     for(int i = 0;i < n;i++) sum+= arr[i];
//     return expected_sum - sum;
// }
// TC --> O(N);
// SC --> O(1);

//Optimal - 2(XOR)
int missing_number(vector<int> &arr){
    int N = arr.size() + 1;
    int XOR1 = 0;
    int XOR2 = 0;
    int i;
    for(i = 0;i < N - 1;i++){
        XOR1 = XOR1^(i+1);
        XOR2 = XOR2^arr[i];
    }
    XOR1 = XOR1 ^ (i+1);
    return XOR1^XOR2;
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cout << missing_number(arr);
    return 0;
}