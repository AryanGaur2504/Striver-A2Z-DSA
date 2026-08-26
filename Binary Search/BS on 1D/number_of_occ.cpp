#include <bits/stdc++.h>
using namespace std;
// Brute
// pair<int,int> firstAndLastOcc(vector<int> &arr,int target){
//     int first = -1,last = -1;
//     for(int i = 0;i < arr.size();i++){
//         if(arr[i] == target){
//             if(first != -1) last = i;
//             else{
//                 first = i;
//                 last = i;
//             }
//         }
//     }
//     return {first,last};
// }

// TC --> O(N);
// SC --> O(1);


// Optimal(Without Upper Or Lower Bound)
int first_occ(vector<int> &arr,int target){
    int low = 0;
    int high = arr.size() - 1;
    int first = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            first = mid;
            high = mid - 1;
        }
        else if(target > arr[mid]){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return first;
}
int last_occ(vector<int> &arr,int target){
    int low = 0;
    int high = arr.size() - 1;
    int last = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(target > arr[mid]){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return last;
}

pair<int,int> firstAndLastOcc(vector<int> &arr,int target){
    int low = 0;
    int high = arr.size() - 1;
    return{first_occ(arr,target),last_occ(arr,target)};
}
// TC --> O(Log 2 N);
// SC --> O(1);

//Optimal (Using Lower And Upper Bound)
// pair<int,int> firstandLastOcc(vector<int> &arr,int target){
//     int first = lower_bound(arr.begin(),arr.end(),target) - arr.begin();
//     int last = upper_bound(arr.begin(),arr.end(),target) - arr.begin() - 1;
//     if(arr[first] == target) return{first,last};
//     return {-1,-1};
// }
// TC --> O(Log 2 N);
// SC --> O(1);

int numberOfOcc(vector<int> &arr,int target){
    pair<int,int> ans = firstAndLastOcc(arr,target);
    if(ans.first == -1) return 0;
    return (ans.second - ans.first + 1);
}

int main(){
    int size,target;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cin >> target;
    cout << numberOfOcc(arr,target);
    return 0;
}