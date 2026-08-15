#include <bits/stdc++.h>
using namespace std;
int merge(vector<int> &arr,int low,int mid,int high){
    int left = low;
    int right = mid + 1;
    int cnt  = 0;
    vector<int> temp;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        }
        else{
            temp.push_back(arr[right++]);
            cnt+= (mid - left + 1);
        }
    }
    while(left <= mid){
        temp.push_back(arr[left++]);
    }
    while(right <= high){
        temp.push_back(arr[right++]);
    }
    for(int i = low;i <= high;i++){
        arr[i] = temp[i - low];
    }
    return cnt;
}
int mergeSort(vector<int> &arr,int low,int high){
    int count = 0;
    if(low >= high) return count;
    int mid = (low + high)/2;
    count += mergeSort(arr,low,mid);
    count += mergeSort(arr,mid + 1,high);
    count += merge(arr,low,mid,high);
    return count;
}

int number_of_inversion_pairs(vector<int> &arr,int low,int high){
    return mergeSort(arr,0,high);    
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cout << number_of_inversion_pairs(arr,0,size-1);
    return 0;
}