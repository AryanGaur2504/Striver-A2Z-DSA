#include <bits/stdc++.h>
using namespace std;
// Brute
// void merge_two_sorted_arrays(vector<int> &arr1,vector<int> &arr2){
//     int n = arr1.size();
//     int m = arr2.size();
//     int len = n+m;
//     vector<int> arr3(len);
//     int left = 0;
//     int right = 0;
//     int index = 0;
//     while(left < n && right < m){
//         if(arr1[left] <= arr2[right]) {
//             arr3[index++] = arr1[left++];
//         }
//         else{
//             arr3[index++] = arr2[right++];
//         }
//     }
//     while(left < n) arr3[index++] = arr1[left++];
//     while(right < m) arr3[index++] = arr2[right++];
//     for(int i = 0;i < len;i++){
//         if(i < n){
//             arr1[i] = arr3[i];
//         }
//         else{
//             arr2[i - n] = arr3[i];
//         }
//     }
// }

// TC --> O(2*(n+m));
// SC --> O(n+m);

// Optimal - 1
// void merge_two_sorted_arrays(vector<int> &arr1,vector<int> &arr2){
//     int n = arr1.size();
//     int m = arr2.size();
//     int left = n - 1;
//     int right = 0;
//     while(left >= 0 && right < m){
//         if(arr1[left] > arr2[right]){
//             swap(arr1[left--],arr2[right++]);
//         }
//         else{
//             break;
//         }
//     }
//     sort(arr1.begin(),arr1.end());
//     sort(arr2.begin(),arr2.end());
// }
// TC --> O(n Log n + m Log m + (n+m));
// SC --> O(1);

// Optimal - 2
void SwapIfGreater(vector<int> &arr1,vector<int> &arr2,int ind1,int ind2){
    if(arr1[ind1] > arr2[ind2]) swap(arr1[ind1],arr2[ind2]);
}
void merge_two_sorted_arrays(vector<int> &arr1,vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    int gap = (n + m)/2 + (n + m) % 2;
    while(gap > 0){
        int left = 0;
        int right = gap;
        while(right < n+m){
            //arr1 and arr2
            if(left < n && right >= n){
                SwapIfGreater(arr1,arr2,left,right - n);
            }
            // arr2 and arr2
            else if(left >= n){
                SwapIfGreater(arr2,arr2,left - n,right - n);
            }
            // arr1 and arr1
            else{
                SwapIfGreater(arr1,arr1,left,right);
            }
            left++,right++;
        }
        if(gap == 1) break;
        gap = (gap / 2) + (gap % 2);
    }
}

// TC --> O(Log(n+m)*(n+m));
// SC --> O(1);

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i = 0;i < n;i++) cin >> arr1[i];
    for(int i = 0;i < m;i++) cin >> arr2[i];
    merge_two_sorted_arrays(arr1,arr2);
    for(int i = 0;i < n+m;i++){
        if(i < n) cout << arr1[i] << "\t";
        else cout << arr2[i - n] << "\t";
    }
    return 0;
}