#include <bits/stdc++.h>
using namespace std;
// Brute
// int maximum_subarray_sum(vector<int> &arr){
//     int max_sum = INT_MIN;
//     for(int i = 0;i < arr.size();i++){
//         int sum = 0;
//         for(int j = i;j < arr.size();j++){
//             sum += arr[j];
//             max_sum = max(max_sum,sum);
//         }
//     }
//     return max_sum;
// }

// Optimal
int maximum_subarray_sum(vector<int> &arr){
    int max_sum = INT_MIN;
    int sum = 0;
    int end;
    int strt,ans_strt;
    for(int i = 0;i < arr.size();i++){
        sum += arr[i];
        if(sum > max_sum){
            max_sum = sum;
            end = i;
            ans_strt = strt;
        }
        if(sum < 0) {
            sum = 0;
            strt = i + 1;
        }
    }
    cout << ans_strt << "\t" << end << endl;
    return max_sum;
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < arr.size();i++) cin >> arr[i];
    cout << maximum_subarray_sum(arr);
    return 0;
}