#include<bits/stdc++.h>
using namespace std;
// Brute
// int longest_subarray(vector<int> &arr,int k){
//     int maxi = 0;
//     for(int i = 0;i < arr.size();i++){
//         int sum = 0;
//         for(int j = i;j < arr.size();j++){
//             sum+= arr[j];
//             if(sum == k) maxi = max(maxi,(j-i+1));
//         }
//     }
//     return maxi;
// }

// Better
// int longest_subarray(vector<int> &arr,int k){
//     unordered_map<int,int> presum;
//     int len_max = 0,sum = 0;
//     for(int i = 0;i < arr.size();i++){
//         int len;
//         sum+= arr[i];
//         if(sum == k){
//             len = i+1;
//             len_max = max(len_max,len);
//         }
//         int sum_req = sum - k;
//         if(presum.find(sum_req) == presum.end()){
//             presum[sum] = i;
//         }
//         else{
//             len = i - presum[sum_req];
//             len_max = max(len_max,len);
//         }
//     }
//     return len_max;
// }

// Optimal
int longest_subarray(vector<int> &arr,int k){
    int left = 0;
    int right = 0;
    int len_max = 0;
    int sum = 0;
    while(right < arr.size()){
        sum+=arr[right];
        if(sum == k){
            len_max = max(len_max,(right-left+1));
        }
        while(sum > k && left <= right){
                sum-= arr[left];
                left++;
        }
        right++;
    }
    return len_max;
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < arr.size();i++) cin >> arr[i];
    int k;
    cin >> k;
    cout << longest_subarray(arr,k);
}