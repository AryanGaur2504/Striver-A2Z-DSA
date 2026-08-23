#include <bits/stdc++.h>
using namespace std;
int searchX(vector<int> &arr,int x){
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == x) return mid;
        else if(x > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main(){
    int size,x;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cin >> x;
    cout << searchX(arr,x);
    return 0;
}