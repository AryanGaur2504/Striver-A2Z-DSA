#include <bits/stdc++.h>
using namespace std;
// Brute
// int lowerBound(vector<int> &arr,int x){
//     int n = arr.size();
//     for(int i = 0;i < n;i++){
//         if(arr[i] >= x) return i;
//     }
//     return n;
// }

// TC --> O(N);
// SC --> O(1);

// Optimal
int lowerBound(vector<int> &arr,int x){
    int low = 0;
    int high = arr.size() - 1;
    int ans = high + 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

// TC --> O(Log N) --> Base 2;
// SC --> O(1);

int main(){
    int size,x;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cin >> x;
    cout << lowerBound(arr,x);
    return 0;
}