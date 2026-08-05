#include <bits/stdc++.h>
using namespace std;
// Brute
// int number_of_subarray_with_sum(vector<int> &arr,int &k){
//     int count = 0;
//     for(int i = 0;i < arr.size();i++){
//         int sum = 0;
//         for(int j = i;j < arr.size();j++){
//             sum+= arr[j];
//             if(sum == k) count++;
//         }
//     }
//     return count;
// }
// TC --> O(N*N);
// SC --> O(1);
// Optimal
int number_of_subarray_with_sum(vector<int> &arr,int &k){
    unordered_map<int,int> mpp;
    mpp[0] = 1;
    int count = 0;
    int presum = 0;
    for(int i = 0;i < arr.size();i++){
        presum += arr[i];
        int required = presum - k;
        count += mpp[required];
        mpp[presum]++;
    }
    return count;
}
//TC --> O(N)
//SC --> O(1)
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++)cin >> arr[i];
    int k;
    cin >> k;
    cout << number_of_subarray_with_sum(arr,k);
    return 0;
}