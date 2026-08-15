#include <bits/stdc++.h>
using namespace std;
// Brute
// vector<int> repeating_and_missing(vector<int> &arr){
//     int missing = -1,repeating = -1;
//     int n = arr.size();
//     for(int i = 1;i <= n;i++){
//         int count = 0;
//         for(int j = 0;j < n;j++){
//             if(i == arr[j]) count++;
//         }
//         if(count == 0) missing = i;
//         else if(count == 2) repeating = i;
//         if(repeating != -1 && missing != -1) break;
//     }
//     return {repeating,missing};
// }

// TC --> O(N*N);
// SC --> O(1);

// Better
// vector<int> repeating_and_missing(vector<int> &arr){
//     int n = arr.size();
//     vector<int> hashmap(n+1);
//     int repeating = -1,missing = -1;
//     for(int i =  0;i < n;i++){
//         hashmap[arr[i]]++;
//     }
//     for(int i = 1;i <= n;i++){
//         if(hashmap[i] == 0) missing = i;
//         else if(hashmap[i] == 2) repeating = i;
//         if(missing != -1 && repeating != -1) break;
//     }
//     return {repeating,missing};
// }

// TC --> O(2*N);
// SC --> O(N);

// Optimal - 1(Mathematical)
// vector<int> repeating_and_missing(vector<int> &arr){
//     int n = arr.size();
//     int repeating; // x
//     int missing; // y
//     int s = 0,s2 = 0;
//     int sN = (n*(n+1))/2;
//     int s2N = (n*(n+1)*(2*n+1))/6;
//     for(int i = 0;i < n;i++){
//         s += arr[i];
//         s2 += arr[i] * arr[i];
//     }
//     int eqn1 = s - sN; // x - y
//     int eqn2 = s2 - s2N; // x^2 - y^2
//     int eqn3 = eqn2/eqn1; // x + y
//     repeating = (eqn1 + eqn3)/2;
//     missing = repeating - eqn1;
//     return {repeating,missing};
// }
// TC --> O(N);
// SC --> O(1);

// Optimal - 2(XOR)
vector<int> repeating_and_missing(vector<int> &arr){
    int n = arr.size();
    int xr = 0;
    for(int i = 0;i < n;i++){
        xr = xr ^ arr[i];
        xr = xr ^ (i+1);
    }
    int bitNo = xr & ~(xr - 1);
    int bit_zero = 0;
    int bit_one = 0;
    for(int i = 0;i < n;i++){
        if((arr[i] & bitNo) != 0){
            bit_one = bit_one ^ arr[i];
        }
        else bit_zero = bit_zero ^ arr[i];
    }
    for(int i = 1;i <= n;i++){
        if((i & bitNo) != 0) {
            bit_one = bit_one ^ i;
        }
        else bit_zero = bit_zero ^ i;
    }
    int count = 0;
    for(int i = 0;i < n;i++){
        if(arr[i] == bit_one) count++;
    }
    if(count == 2) return {bit_one,bit_zero};
    return {bit_zero,bit_one};
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    vector<int> ans = repeating_and_missing(arr);
    for(int i = 0;i < 2;i++) cout << ans[i] << "\t";
}