#include <bits/stdc++.h>
using namespace std;
// Brute
// int search_in_rotated_sorted(vector<int> &arr,int target){
//     for(int i = 0;i < arr.size();i++){
//         if(arr[i] == target) return i;
//     }
//     return -1;
// }

// TC --> O(N);
// SC --> O(1);

// Optimal
int search_in_rotated_sorted(vector<int> &arr,int target){
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
        int mid = (high + low)/2;
        if(arr[mid] == target) return mid;
        //Left Is Sorted
        if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target <= arr[mid]){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        else{
            if(arr[mid] <= target && target <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

// TC --> O(Log 2 N);
// SC --> O(1);

int main(){
    int size,target;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cin >> target;
    cout << search_in_rotated_sorted(arr,target);
    return 0;
}